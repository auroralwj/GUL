/**@file           CGNSSCoord
 *  @brief         ������
 *  @details       ����������ص��㷨
 *  @author        wuchuanfei@sixens.com
 *  @date          2020/04/14
 *  @version       1.0
 *  @note          ����
 *  @copyright     Copyright(c) 2019-2020 Beijing Sixents Technology Co., Ltd. All rights reserved.
 */
#ifndef _GNSS_UTILITY_INTERFACE_H_
#define _GNSS_UTILITY_INTERFACE_H_

#include <string>

#include "GNSSDataStruct.h"

namespace sixents
{
    namespace GNSSUtilityLib
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
            // ����ӿ�����
            // ʱ����ؽӿ�
            // ʱ��ṹ
            // ��׼��ʽ����-��-�� ʱ���֣���.����
            // ʾ����1111-11-11 11:11:11.111

            // ��ʽ��������ʱ�� ��������ʱ�����ʽ���
            // week: �����������
            // sec: �����������
            // satType: �����������������
            // formatString: ���������ʱ���ʽ�����ַ���
            // len: ���������formatString�ĳ���
            DLL_API int STD_CALL FormatWeekSecTime(const int week, const double sec, const int satType, char* formatString, int& len);

            // ��ʽ����׼ʱ��
            // year: �����������
            // month: �����������
            // day: �����������
            // hour: ���������ʱ
            // minute: �����������
            // second: �����������
            // formatString: ���������ʱ���ʽ�����ַ���
            // len: ���������formatString�ĳ���
            DLL_API int STD_CALL FormatStandardTime(const int year, const int month, const int day,
                const int hour, const int minute, const double second,
                char* formatString, int& len);

            // GNSSʱ��������UTCʱ�以ת
            // GNSSʱ��תUTCʱ��
            // week: �����������
            // sec: �����������
            // satType: �����������������
            // year: �����������
            // month: �����������
            // day: �����������
            // hour: ���������ʱ
            // minute: �����������
            // second: �����������
            DLL_API int STD_CALL GNSSTimeToUTCTime(const int week, const double sec, const int satType,
                int& year, int& month, int& day, int& hour, int& minute, double& second);

            // GNSSʱ��תUTCʱ�䣬����Ϊ��λ 2020.04.17����
            // week: �����������
            // sec: �����������
            // satType: �����������������
            // sec: �����������
            DLL_API int STD_CALL GNSSTimeToUTCSecTime(const int week, const double second, const int satType, double& sec);

            // UTCʱ��תGNSSʱ��
            // year: �����������
            // month: �����������
            // day: �����������
            // hour: ���������ʱ
            // minute: �����������
            // second: �����������
            // satType: �����������������
            // week: �����������
            // sec: �����������
            DLL_API int STD_CALL UTCTimeToGNSSTime(const int year, const int month, const int day,
                const int hour, const int minute, const double second, const int satType,
                int& week, double& sec);

            // UTCʱ��תGNSSʱ�䣬����Ϊ��λ
            // year: �����������
            // month: �����������
            // day: �����������
            // hour: ���������ʱ
            // minute: �����������
            // second: �����������
            // satType: �����������������
            // sec: �����������
            DLL_API int STD_CALL UTCTimeToGNSSSecTime(const int year, const int month, const int day,
                const int hour, const int minute, const double second, const int satType, double& sec);

            // BD��Glonass��Galileoʱ��������GPSʱ�以ת 2020.04.17����
            DLL_API int STD_CALL GNSSTimeConvert(const int srcWeek, const double srcSec, const int srcSatType,
                int& destWeek, double& destSec, const int destSatType);

            // ������ת��  2020.04.17����
            // week: �����������
            // sec: �����������
            // satType: �����������������
            // sec: �����������
            DLL_API int STD_CALL WeekSecToSec(const int week, const double second, const int satType, double& sec);

            // Glonass��GPS��ת  2020.04.20����
            DLL_API int STD_CALL UTCTimeToGlonassTime(const int year, const int month, const int day, const int hour, const int minute, const double second, int& gyear, int& gmonth, int& gday, int& ghour, int& gminute, double& gsec);
            DLL_API int STD_CALL GlonassTimeToUTCTime(const int year, const int month, const int day, const int hour, const int minute, const double second, int& utcYear, int& utcMonth, int& utcDay, int& utcHour, int& utcMinute, double& utcSec);
            DLL_API int STD_CALL GPSTimeToGlonassTime(const int week, const double second, int& gyear, int& gmonth, int& gday, int& ghour, int& gminute, double& gsec);
            DLL_API int STD_CALL GlonassTimeToGPSTime(const int year, const int month, const int day, const int hour, const int minute, const double second, int& week, double& sec);

            // ������ؽӿ�
            // ����ṹ
            // �ռ�ֱ�������ʽΪx,y,z
            // վ�������ʽΪeast,north,up
            // ��������ʽΪlat,lon,height
            // �ռ�ֱ������ת�������
            // x,y,z: ����������ռ�ֱ������
            // lon,lat,height: ����������������
            DLL_API int STD_CALL XYZ2BLH(const double x, const double y, const double z,
                double& lon, double& lat, double& height);
            // �������ת�ռ�ֱ������
            // lon,lat,height: ����������ռ�ֱ������
            // x,y,z: ����������������
            DLL_API int STD_CALL BLH2XYZ(const double lon, const double lat, const double height,
                double& x, double& y, double& z);
            // �ռ�ֱ������תվ������
            // curX,curY,curZ: �����������ǰվ�Ŀռ�ֱ������
            // refX,refY,refZ: ����������ο�վ�ռ�ֱ������
            // east,north,up: �����������ǰվ��վ�Ľ�����
            DLL_API int STD_CALL XYZ2ENU(const double curX, const double curY, const double curZ,
                const double refX, const double refY, const double refZ,
                double& east, double& north, double& up);
            // վ������ת�ռ�ֱ������
            // east,north,up: �����������ǰվ��վ�Ľ�����
            // refX,refY,refZ: ����������ο�վ�ռ�ֱ������
            // curX,curY,curZ: �����������ǰվ�Ŀռ�ֱ������
            DLL_API int STD_CALL ENU2XYZ(const double east, const double north, const double up,
                const double refX, const double refY, const double refZ,
                double& curX, double& curY, double& curZ);

            // ������ؽӿ� 2020.04.17�޸�
            // �����Ӳ�
            // ephObj: �����������������
            // clockVal: ����/�������������������Ӳ�ֵ
            DLL_API int STD_CALL CalcGlonassEphSatClock(const double& sec, const SGlonassEphemeris& ephObj, double& clockVal);
            DLL_API int STD_CALL CalcEphSatClock(const double& sec, const SEphemeris& ephObj, double& clockVal);
            // ����λ��
            // ephObj: �����������������
            // x,y,z: ������������������λ��ֵ
            DLL_API int STD_CALL CalcGlonassEphSatPos(const double sec, const SGlonassEphemeris& ephObj, double& x, double& y, double& z);
            DLL_API int STD_CALL CalcEphSatPos(const double sec, const SEphemeris& ephObj, double& x, double& y, double& z);

            // �Ƕ���ؽӿ�
            // ��ʽ���Ƕ�
            // degree: ���������С����ʽ�Ķ�
            // formatType: ���������trueʱ����ʽ��Ϊ�ȣ�falseʱ��ʽ��Ϊ�ȷ���;Ĭ��Ϊtrue
            // formatString: �����������ʽ������ַ���
            DLL_API int STD_CALL FormatAngleByDegree(const double degree, char* formatString, const bool formatType = true);
            // ��ʽ���Ƕ�
            // degree: �����������
            // minute: �����������
            // sec: �����������
            // formatType: ���������trueʱ����ʽ��Ϊ�ȣ�falseʱ��ʽ��Ϊ�ȷ���;Ĭ��Ϊtrue
            // formatString: �����������ʽ������ַ���
            DLL_API int STD_CALL FormatAngleByDMS(const int degree, const int minute, const double sec,
                char* formatString, const bool formatType = true);
            // ��ת����
            // degree: �����������
            // radian: �������������
            DLL_API int STD_CALL Deg2Rad(const double degree, double& radian);
            // degree: �����������
            // minute: �����������
            // sec: �����������
            // radian: �������������
            DLL_API int STD_CALL DMS2Rad(const int degree, const int minute, const double sec, double& radian);
            // ����ת��
            // radian: �������������
            // degree: �����������
            DLL_API int STD_CALL Rad2Deg(const double radian, double& degree);
            // radian: �������������
            // degree: �����������
            // minute: �����������
            // sec: �����������
            DLL_API int STD_CALL Rad2DMS(const double radian, int& degree, int& minute, double& sec);

#ifdef __cplusplus
        } // end extern "C"
#endif
    }  // end namespace GNSSUtilityLib
}  // end namespace sixents

#endif