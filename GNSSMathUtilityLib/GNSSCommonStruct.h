#pragma once

namespace sixents
{
    namespace GNSSMathUtilityLib
    {
        // ����ṹ
        struct SGNSSMatrix
        {
            double** matrixNum;    // ��ά�������ڴ�ž�������
            int row;               // ����
            int col;               // ����
        };
    }  // end namespace GNSSMathUtilityLib
}  // end namespace sixents