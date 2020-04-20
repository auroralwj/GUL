#include "CGNSSMatrix.h"

#include <iostream>

#include "../Eigen/eigen-eigen-323c052e1731/Eigen/Dense"
namespace sixents
{
    namespace GNSSMathUtilityLib
    {
        CGNSSMatrix::CGNSSMatrix(const SGNSSMatrix& matrix)
        {
            m_matrix = matrix;
        }
        CGNSSMatrix::CGNSSMatrix()
        {
        }

        CGNSSMatrix::~CGNSSMatrix()
        {
        }

        CGNSSMatrix::CGNSSMatrix(const CGNSSMatrix& matrixObj)
        {
        }

        SGNSSMatrix CGNSSMatrix::GetMatrix()
        {
            return m_matrix;
        }

        CGNSSMatrix CGNSSMatrix::operator+(CGNSSMatrix& matrix)  const // �ӷ�
        {
            CGNSSMatrix mat;
            if (matrix.GetMatrix().row != m_matrix.row || matrix.GetMatrix().col != m_matrix.col)
            {
                return mat;
            }
            for (int i = 0; i < matrix.GetMatrix().row; i++)
            {
                for (int j = 0; j < matrix.GetMatrix().col; j++)
                {
                    mat.GetMatrix().matrixNum[i][j] = m_matrix.matrixNum[i][j] + matrix.GetMatrix().matrixNum[i][j];
                }
            }
            return matrix;
        }

        CGNSSMatrix CGNSSMatrix::operator-(CGNSSMatrix& matrix)  // ����
        {
            CGNSSMatrix mat;

            if (matrix.GetMatrix().row != m_matrix.row || matrix.GetMatrix().col != m_matrix.col)
            {
                return mat;
            }
            for (int i = 0; i < matrix.GetMatrix().row; i++)
            {
                for (int j = 0; j < matrix.GetMatrix().col; j++)
                {
                    mat.GetMatrix().matrixNum[i][j] = m_matrix.matrixNum[i][j] - matrix.GetMatrix().matrixNum[i][j];
                }
            }
            return matrix;
        }

        CGNSSMatrix CGNSSMatrix::operator*(CGNSSMatrix& matrix) // �˷�
        {
            //���䱻����
            Eigen::MatrixXd mat1(this->GetMatrix().row, this->GetMatrix().col);
            //�������
            Eigen::MatrixXd mat2(matrix.GetMatrix().row, matrix.GetMatrix().col);
            //������
            Eigen::MatrixXd matall(this->GetMatrix().row, matrix.GetMatrix().col);
            if (this->GetMatrix().col != matrix.GetMatrix().row)
            {
                return matrix;
            }

            for (int i = 0; i < matrix.GetMatrix().row; i++)
            {
                for (int j = 0; j < matrix.GetMatrix().col; j++)
                {
                    mat1(i, j) = m_matrix.matrixNum[i][j];
                }
            }

            for (int i = 0; i < m_matrix.row; i++)
            {
                for (int j = 0; j < m_matrix.col; j++)
                {
                    mat2(i, j) = matrix.GetMatrix().matrixNum[i][j];
                }
            }

            matall = mat1 * mat2;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    std::cout << matall(i, j) << std::endl;
                }
            }
            return matrix;
        }

        int GNSSMathUtilityLib::CGNSSMatrix::MatrixInverse(SGNSSMatrix& matrix)
        {
            if (matrix.row != matrix.col)
            {
                return 0;
            }
            Eigen::MatrixXd mat(matrix.row, matrix.col);
            for (int i = 0; i < matrix.row; i++)
            {
                for (int j = 0; j < matrix.col; j++)
                {
                    mat(i, j) = matrix.matrixNum[i][j];
                }
            }
            auto matInverse = mat.inverse();
            return 1;
        }

        int GNSSMathUtilityLib::CGNSSMatrix::MatrixTransposition(SGNSSMatrix& matrix)
        {
            Eigen::MatrixXd mat(matrix.row, matrix.col);
            for (int i = 0; i < matrix.row; i++)
            {
                for (int j = 0; j < matrix.col; j++)
                {
                    mat(i, j) = matrix.matrixNum[i][j];
                }
            }
            auto matTransposition = mat.transpose();
            return 1;
        }
    }
}