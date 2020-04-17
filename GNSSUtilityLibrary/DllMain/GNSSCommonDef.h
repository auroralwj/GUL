/**@file           CGNSSCoord
 *  @brief         ������
 *  @details       ����������ص��㷨
 *  @author        wuchuanfei@sixens.com
 *  @date          2020/04/14
 *  @version       1.0
 *  @note          ����
 *  @copyright     Copyright(c) 2019-2020 Beijing Sixents Technology Co., Ltd. All rights reserved.
 */

#ifndef _GNSS_COMMON_DEF_H
#define _GNSS_COMMON_DEF_H

namespace sixents
{
    namespace GNSSUtilityLib
    {
        // ö��ֵ����
        enum SAT_SYS_TYPE
        {
            GPS = 1,  // GPS
            GLONASS,  // ������˹
            GALILEO,  // ٤����
            BDS       // ����
        };

        enum COORDINATE_SYS_TYPE
        {
            WGS84 = 1, // GPS����ϵ
            PZ90,      // ������˹����ϵ
            ITRF96,    // ٤��������ϵ
            CGCS2000   // ��������ϵ
        };

        enum COORDINATE_TYPE
        {
            XYZ = 1,  // �ռ�ֱ������ϵ
            BLH,      // �������
            ENU       // վ������
        };

        struct SCoordData
        {
            double a;
            double f;
        };

        // �����붨��
        static const int RETURN_SUCCESS = 0;           // �ɹ�
        static const int RETURN_FAIL = -1;                 //
        //static const int RETURN_PACKAGE_LENGHT_ERROR = -2; // �����ȴ���
        //static const int RETURN_CRC_CHECK_FAILED = -3;     // CRCУ��ʧ��
        //static const int RETURN_STATION_CORRECT = -4;      // StatioinIdУ��ʧ��
        //static const int RETURN_PERMISSION_ERROR = -5;     // Ȩ�޴���
        //static const int RETURN_UNSUPPORTED_RTCM_MSG = -6; // �ݲ�֧�ֵ�Э��
        //static const int RETURN_NOT_INITIALIZED = -7;      // δ��ʼ��
        //static const int RETURN_INVALID_PARAMETER = -8;    // ��Ч����

        // ��������
        // For Angle
        const static int ANGLE_LENGTH = 11;
        const static double gpst0[] = { 1980,1, 6,0,0,0 }; /* gps time reference */
        const static double gst0[] = { 1999,8,22,0,0,0 };  /* galileo system time reference */
        const static double bdt0[] = { 2006,1, 1,0,0,0 };  /* beidou time reference */
        const static double PI = 3.1415926535897932;  /* pi */
        const static double D2R = (PI / 180.0);          /* deg to rad */
        const static double R2D = (180.0 / PI);          /* rad to deg */

        static double leaps[65][7] = { /* leap seconds (y,m,d,h,m,s,utc-gpst) */
{2017,1,1,0,0,0,-18},
{2015,7,1,0,0,0,-17},
{2012,7,1,0,0,0,-16},
{2009,1,1,0,0,0,-15},
{2006,1,1,0,0,0,-14},
{1999,1,1,0,0,0,-13},
{1997,7,1,0,0,0,-12},
{1996,1,1,0,0,0,-11},
{1994,7,1,0,0,0,-10},
{1993,7,1,0,0,0, -9},
{1992,7,1,0,0,0, -8},
{1991,1,1,0,0,0, -7},
{1990,1,1,0,0,0, -6},
{1988,1,1,0,0,0, -5},
{1985,7,1,0,0,0, -4},
{1983,7,1,0,0,0, -3},
{1982,7,1,0,0,0, -2},
{1981,7,1,0,0,0, -1},
{0}
        };

        const time_t CPU2GALT0 = 935280000;
        const time_t CPU2GPST0 = 315964800;
        const time_t CPU2BDT0 = 1136073600;
    } // end namespace GNSSUtilityLib
} // end namespace sixents

#endif