#ifndef _GNSS_MATH_UTILITY_INTERFACE_H_
#define _GNSS_MATH_UTILITY_INTERFACE_H_

#include <string>

#include "GNSSCommonStruct.h"
#include "GNSSMatrix/CGNSSMatrix.h"

namespace sixents
{
    namespace GNSSMathUtilityLib
    {
#ifdef _WIN32
#define STD_CALL _stdcall
#ifdef DLL_EXPORT
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif
#else
#define DLL_API __attribute__((visibility("default")))
#define STD_CALL
#endif
#define UNREFERENCED_PARAMETER(P) (P)

#ifdef __cplusplus
        extern "C" {
#endif
            // ������ؽӿ�
            // ����ӷ�
            // destMatrix������/������������Ǳ����������ǽ��
            // srcMatrix �������������
            DLL_API int STD_CALL MatrixAdd(const SGNSSMatrix& srcMatrix, SGNSSMatrix& destMatrix);

            // �������
            // destMatrix������/������������Ǳ����������ǽ��
            // srcMatrix �������������
            DLL_API int STD_CALL MatrixSub(const SGNSSMatrix& srcMatrix, SGNSSMatrix& destMatrix);

            // ����˷�
            // destMatrix������/������������Ǳ����������ǽ��
            // srcMatrix �������������
            DLL_API int STD_CALL MatrixMul(SGNSSMatrix& srcMatrix, SGNSSMatrix& destMatrix);

            // ����ת��
            // desMatrix������/�����������ת�þ���ͬʱҲ�ǽ��
            DLL_API int STD_CALL MatrixTransposition(SGNSSMatrix& matrix);

            // ��������
            // desMatrix������/������������������ͬʱҲ�ǽ��
            DLL_API int STD_CALL MatrixInverse(SGNSSMatrix& matrix);

            // ������������
            // ���ӵ����У���Ĭ��ֵ1���Ժ��ٸ�����������Ż���
            // desMatrix������/������������������еľ���ͬʱҲ�ǽ��
            // row: ������������ӵ�����
            // col: ������������ӵ�����
            DLL_API int STD_CALL MatrixAddRowCol(SGNSSMatrix& matrix, const int row, const int col);

            // �����������
            // desMatrix������/������������������еľ���ͬʱҲ�ǽ��
            // row: ������������ٵ�����
            // col: ������������ٵ�����
            DLL_API int STD_CALL MatrixSubRowCol(SGNSSMatrix& matrix, const int row, const int col);

#ifdef __cplusplus
        }
#endif
    }  // end namespace GNSSMathUtilityLib
}  // end namespace sixents

#endif