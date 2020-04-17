/**@file             �ļ���
 *  @brief          ��Ŀ����
 *  @details       ��Ŀϸ��
 *  @author       ����
 *  @date          ����
 *  @version      �汾
 *  @note          ע��
 *  @copyright   ��Ȩ
 */

#ifndef _GNSS_MATRIX_H
#define _GNSS_MATRIX_H

#include "../GNSSCommonStruct.h"

namespace sixents
{
    namespace GNSSMathUtilityLib
    {
        // ����ṹ
        class CGNSSMatrix
        {
        public:
            explicit CGNSSMatrix();
            explicit CGNSSMatrix(const SGNSSMatrix& matrix);
            CGNSSMatrix(const CGNSSMatrix& matrixObj);
            ~CGNSSMatrix();

            void SetMatrix(const SGNSSMatrix& matrix);
            SGNSSMatrix GetMatrix();

            // ���㷽��
            int MatrixTransposition(SGNSSMatrix& matrix); // ת��
            int MatrixInverse(SGNSSMatrix& matrix);       // ����
            CGNSSMatrix operator+(CGNSSMatrix& matrix); // �ӷ�
            CGNSSMatrix operator-(CGNSSMatrix& matrix); // ����
            CGNSSMatrix operator*(const CGNSSMatrix& matrix); // �˷�

        private:
            SGNSSMatrix m_matrix;
        };
    }  // end namespace GNSSMathUtilityLib
}  // end namespace sixents

#endif
