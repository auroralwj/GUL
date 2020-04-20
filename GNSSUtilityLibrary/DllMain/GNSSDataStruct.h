/**@file           CGNSSCoord
 *  @brief         ������
 *  @details       ����������ص��㷨
 *  @author        wuchuanfei@sixens.com
 *  @date          2020/04/14
 *  @version       1.0
 *  @note          ����
 *  @copyright     Copyright(c) 2019-2020 Beijing Sixents Technology Co., Ltd. All rights reserved.
 */
#ifndef _GNSS_DATA_STRUCT_H
#define _GNSS_DATA_STRUCT_H

#include <map>

namespace sixents
{
    namespace GNSSUtilityLib
    {
        /**
         * @class   : SSignalValue
         * @author  : zhuquanlin@sixents.com
         * @brief   : �ź����ݽṹ��
         * @note    : ����һ��������һ���źŵ�����
         */
        struct SSignalValue
        {
            //  MSM 1-7 satellite data part
            // Signal Data
            // DF400: GNSS �źž�ȷα��۲�ֵ
            double m_dbFinePseudoranges = 0.0;

            // DF401: GNSS �źž�ȷ��λ��������
            double m_dbFinePhaserange = 0.0;

            // DF402: GNSS ��λ��������ʱ���־���ṩ���ջ��������������źŵ�ʱ�䳤�ȡ�
            unsigned char m_ui8LockTimeIndicator = 0U;

            // DF403: GNSS �ź�CNR���ṩ�����źŵ�����ȣ���λdB-Hz��DF403=0 ��ʾ��ֵδ����򲻿��á�
            double m_dbSignalCnr = 0.0;

            // DF404: GNSS �źž�ȷ��λ����仯��
            // FP means FinePhaserange
            double m_dbFPRates = 0.0;

            // DF405: ������չ�ֱ��ʵ�GNSS �źž�ȷα��ֵ
            // ER means ExtendedResolution
            double m_dbFinePseudorangesWithER = 0.0;

            // DF406: ������չ�ֱ��ʵ�GNSS �źž�ȷ��λ����
            // ER means ExtendedResolution
            double m_dbFinePhaserangeWithER = 0.0;

            // DF407: ������չ��Χ�ͷֱ��ʵ�GNSS ��λ����ʱ��������־
            // PLTI means PhaserangeLockTimeIndicator
            // ERAR means WithExtendedRangeAndResolution
            unsigned short m_ui16PLTIWithERAR = 0U;

            // DF408: ������չ�ֱ��ʵ�GNSS �ź������
            // WER means WithExtendedResolution
            double m_dbSignalCnrsWER = 0.0;

            // DF420: ����ģ����ָ�꣬0=û�а���ģ���ȣ�1=����ģ���ȡ�
            // HCAI means HalfCycleAmbiguityIndicator
            unsigned char m_ui8HCAI = 0U;

            // DF010 : GPS L1 ���־
            // DF010 : GPS L1 Code Indicator
            // DF039 : GLONASS L1 ���־
            // DF030 : GLONASS L1 Code Indicator
            // DF016 : GPS L2 ���־
            // DF016 : GPS L2 Code Indicator
            // DF046 : GLONASS L2 ���־
            // DF046 : GLONASS L2 Code Indicator
            unsigned char m_ui8CodeMark = 0U;

            // ���ڱ�׼���ȵ��ģ�MSM1~MSM3�����У�
            // Pseudorange(i) = c / 1000 ��(Nms + Rough_range + Fine_Pseudorange(i))
            // PhaseRange(i) = c / 1000 ��(Nms + Rough_range + Fine_PhaseRange(i))
            // PhaseRangeRate(i) = Rough_PhaseRangeRate + Fine_PhaseRangeRate(i)
            // ���ڸ߾��ȵ��ģ�MSM4~MSM7�����У�
            // Pseudorange(i) = c / 1000 ��(Nms + Rough_range + Fine_Pseudorange(i))
            // PhaseRange(i) = c / 1000 ��(Nms + Rough_range + Fine_PhaseRange(i))
            // PhaseRangeRate(i) = Rough_PhaseRangeRate + Fine_PhaseRangeRate(i)
            // GNSS ������źž�ȷα��
            double m_dbPseudoranges = 0.0;

            // GNSS ������źž�ȷ��λ����
            double m_dbPhaserange = 0.0;

            // GNSS ������źž�ȷ��λ����仯��
            double m_dbPhaseRangeRate = 0.0;
        };

        /**
         * @class   : SSatelliteValue
         * @author  : zhuquanlin@sixents.com
         * @brief   : �������ݽṹ�壨�����ź����ݣ�
         * @note    : ����۲�ֵÿ�����ǵ�����
         */
        struct SSatelliteValue
        {
            // Satellite Data
            // DF397: GNSS ���Ǹ��Ծ�����������������ڻָ�ĳ�����ǵ������۲�ֵ��
            unsigned char m_ui8Milliseconds = 0U;

            // ��չ������Ϣ
            unsigned char m_ui8ExtendedSatInfo = 0U;

            // DF398: GNSS ���Ǹ��Ծ���ĺ�������������1/1024ms��Լ300m���ľ��Ȼָ�������GNSS���Ծ���
            double m_dbModulo1Millisecond = 0.0;

            // DF399: GNSS ���Ǹ�����λ����仯��
            int m_i32RoughPhaseRangeRates = 0U;

            // DF040: GLONASS ���ǵ�Ƶ��ͨ���š�ͨ�� DF038 �� DF040���û���������Ϳ�֪�����ǵ�Ƶ�ʡ�
            // ע�����ʱ���ֵ��Ҫ��1020ȡֵ��1087��չ��ϢDF419�� Glonassר��
            // ע��Glonass����ʱ���븳ֵ, �������ʧ��
            unsigned char m_ui8SatFrequencyChannelNumber = 255;

            std::map< int, SSignalValue > m_mapSignalValues;
        };

        /**
         * @class   : SEpochSatObs
         * @author  : zhuquanlin@sixents.com
         * @brief   : �۲�ֵ���ݽṹ��
         * @note    : ����۲�ֵ��������
         */
        struct SEpochSatObs
        {
            // MSM 1-7  head part
            // DF002: �������ͺ�,�������ֲ�ֵ��ġ�
            unsigned short m_ui16MsgType = 0U;

            // DF003: �ο�վ ID �ɷ����ṩ��ȷ����
            unsigned int m_ui32GmNtiRefStationID = 0U;
            // DF416: GLONASS ���ǵ������ĺ��źŵ�������
            unsigned char m_ui8DayOfWeek = 0U;

            // GNSS ��Ԫʱ�̣�GPS DF004
            // GNSS ��Ԫʱ�̣�Galileo DF248
            // GNSS ��Ԫʱ�̣�Glonass DF034
            // GNSS ��Ԫʱ�̣�SBAS DF004
            // GNSS ��Ԫʱ�̣�QZSS DF428
            // GNSS ��Ԫʱ�̣�BeiDou DF427
            unsigned int m_ui32GnssEpochTime = 0U;

            // DF005: ͬ��GNSS���ı�־
            // DF393: MSM �������������1 = ������Ը���ʱ����ο�վID �ĸ�����ģ�0 = ��������ʱ����ʱ����ο�վID
            // �����һ����
            unsigned char m_ui8MultiMsgBit = 0U;

            // DF409: ��ʾ��վ�����ھ�ţ�Issue Of Data
            // Station����Ϊ�����ֶΣ����ڽ�MSM����Ĳ�վ˵�������ջ�������˵���ȣ���ϵ������DF409 = 0
            // ��ʾδʹ�ñ������ֶΡ�
            unsigned char m_ui8IODS = 0U;

            // DF001: Ԥ�����ݣ�����7λ
            signed char m_i8Reserved = 0U;

            // DF411: ʱ��У׼��־����ʾʱ��У׼�������
            //  0 = δʹ��ʱ��У׼����ʱ�����ջ��Ӳ���뱣��С�ڡ�1ms��Լ��300km����
            //  1 = ʹ����ʱ��У׼����ʱ�����ջ��Ӳ���뱣��С�ڡ�1 ΢�루Լ��300m����
            //  2 = δ֪��ʱ��У׼״̬��
            //  3 = ������
            unsigned char m_ui8ClockSteeringIndicator = 0U;

            // DF412: ��չʱ�ӱ�־����ʾʱ��У׼�������
            //  0 = ʹ���ڲ�ʱ�ӣ�
            //  1 = ʹ���ⲿʱ�ӣ�״̬Ϊ����������
            //  2 = ʹ���ⲿʱ�ӣ�״̬Ϊ��δ����������ʾ�ⲿʱ��ʧЧ����������ݿ��ܲ��ɿ���
            //  3 = ʹ��ʱ��״̬δ֪��
            unsigned char m_ui8ExternalClockIndicator = 0U;

            // DF007: GPS ����ɢƽ����־
            // DF036: GLONASS ����ɢƽ����־
            // DF417: GNSS ƽ�����ͱ�־��1=ʹ�÷�����ɢƽ����0=����ƽ�����͡�
            unsigned char m_ui8GnssSmoothingIndicator = 0U;

            // DF008: GPS ƽ�����
            // DF037: GLONASS ƽ�����
            // DF418: GNSS ƽ�����䣬ָʹ���ز�ƽ��α���ʱ�γ��ȡ�
            unsigned char m_ui8GnssSmoothingInterval = 0U;

            // DF394: ��������
            unsigned long long m_ui64SatMask = 0U;

            // DF395: �ź�����
            unsigned int m_ui32SignalMask = 0U;

            // DF396: ��Ԫ����
            unsigned long long m_ui64CellMask = 0U;

            std::map< int, SSatelliteValue > m_mapSatValues;
        };

        /**
         * @class   : SEphemeris
         * @author  : wuchuanfei@sixents.com
         * @brief   : �������ݽṹ��
         * @note    : ����������������
         */
        struct SEphemeris
        {
            // DF002: �������ͺ�,�������ֲ�ֵ��ġ�
            unsigned short m_ui16MsgType = 0U;

            // DF009: GPS���Ǻ�
            // DF252: Galileo���Ǻ�
            // DF429: QZSS���� ID
            // DF488: BDS ���Ǻ�
            unsigned char m_ui8SatId = 0U;

            // DF076: GPS����,������1980 ��1 ��5 ����ҹ��ÿ1024 ��һ��ѭ����
            // DF289: Galileo������ÿ4096�ܣ�Լ78�꣩һ��ѭ����GST��OS-SIS-ICD-1.1�ж��壬��ʼ�� 1999 �� 8 �� 22 ��������
            // 00:00UT��8 �� 21 �պ� 8 �� 22 ��֮�����ҹ����
            // DF452: QZSS��������ѭ������Ϊ1024 �ܡ���ʼ��1980 ��1 ��5 �����ϵ���ҹ / 1 ��6 �ŵ����ϡ�
            // DF489: Roll-over every 8192 weeks starting from 00:00:00 UTC on Jan. 1,2006 of BDT.
            unsigned char m_ui16WeekNum = 0U;

            // DF077: GPS���ǵ��û���Ч���뾫�ȣ���λm
            // DF453: QZSS�����ľ��ȣ��޵�λ��
            // DF490: BDS���ǵ��û����뾫�ȣ�URA��ָ�����޵�λ��
            unsigned char m_ui8URA = 0U;

            // DF078: GPS������־,��ʾ���۲��GPS L2 ��������͡�00=������01=P �룻10=C/A �룻11 = L2C �롣
            // DF451: QZSS����L2���������
            unsigned char m_ui8CodeOnL2 = 0U;

            // DF079: GPS���ǹ����Ǳ仯��
            // DF292: Galileo���ǹ����Ǳ仯��
            // DF449: QZSS���ǹ����Ǳ仯��
            // DF491: BDS ���ǹ����Ǳ仯��
            // �ο�RTCM STANDARD 10403.3����������(��λ:��/s) �Ѿ�ת���ɳ���ģʽ(��λ:deg/s)
            // ��λ��deg/s
            double m_dbIdot = 0.0;

            // DF071: GPS���Թ㲥��������ʾ�������������ں�
            // DF434�� QZSS ���������ھ�ţ��޵�λ��
            unsigned char m_ui8Iode = 0U;

            // DF081: GPS�����Ӳο�ʱ�̣���λs��
            // DF293: Galileo�����Ӳο�ʱ�䡣
            // DF430: QZZS�����Ӳ����ο�ʱ��
            // DF493: BDS ���������ݲο�ʱ�̣���λs��
            unsigned int m_ui32Toc = 0U;

            // DF082: GPS��������Ư������������λs/s2��
            // DF294: Galileo������Ư������������λ s/s 2 ��
            // DF431: QZSS��������Ư������������λ s/s 2 ��
            // DF494: BDS��������Ư������������λ s/s 2 ��
            double m_dbAf2 = 0.0;

            // DF083: GPS���������ٸ�����������λs/s��
            // DF295: Galileo�������ٸ�����������λ s/s��
            // DF432: QZSS���������ٸ�����������λ s/s��
            // DF495: BDS���������ٸ�����������λ s/s��
            double m_dbAf1 = 0.0;

            // DF084: GPS�������Ӳ������������λs��
            // DF296: Galileo�����Ӳ������������λ s��
            // DF433: QZSS�������Ӳ������������λ s��
            // DF496: BDS���������ٸ�����������λ s/s��
            double m_dbAf0 = 0.0;

            // DF085: ��ʾ�����Ӳ����ھ�ţ���8 λ��IODE ��ͬ��
            // DF456:  QZSS �����Ӳ����ھ�ţ�ͬһ�������� DF456 �ĵ� 8 λ�� QZSSIODE(DF434)��ͬ���� GPS IODC ��ͬ���ǣ�QZSS
            // IODC ����� 2 λ�� SV ʱ�Ӳ����ļ�������ÿ 15min ���һ�Ρ���λ���޵�λ
            unsigned char m_ui16Iodc = 0U;

            // DF086: GPS���ǹ���뾶���ҵ��͸�������������λm��
            // DF297: Galileo���ǹ���뾶���ҵ��͸�������������λ m��
            // DF435: QZSS���ǹ���뾶���ҵ��͸�������������λ m��
            // DF498: BDS���ǹ���뾶���ҵ��͸�������������λ m��
            double m_dbCrs = 0.0;

            // DF087: GPS����ƽ���˶����������ֵ֮��
            // DF298: Galileo����ƽ���˶����������ֵ֮��
            // DF436: QZSS����ƽ���˶����������ֵ֮��
            // DF499: BDS����ƽ���˶����������ֵ֮��
            // �ο�RTCM STANDARD 10403.3����������(��λ:��/s) �Ѿ�ת���ɳ���ģʽ(��λ:deg/s)
            // ��λ��deg/s
            double m_dbDeltaN = 0.0;

            // DF088: GPS���ǲο�ʱ���ƽ����ǣ���λ�С�
            // DF299: Galileo���ǲο�ʱ���ƽ����ǣ���λ �С�
            // DF437: QZSS���ǲο�ʱ���ƽ����ǣ���λ �С�
            // DF500: BDS���ǲο�ʱ���ƽ����ǣ���λ �С�
            // �ο�RTCM STANDARD 10403.3����������(��λ:��) �Ѿ�ת���ɳ���ģʽ(��λ:deg)
            // ��λ��deg
            double m_dbM0 = 0.0;

            // DF089: GPS����γ�ȷ��ǵ����ҵ��͸�������������λrad��
            // DF300: Galileo����γ�ȷ��ǵ����ҵ��͸�������������λ rad��
            // DF438: QZSS����γ�ȷ��ǵ����ҵ��͸�������������λ rad��
            // DF501: BDS����γ�ȷ��ǵ����ҵ��͸�������������λ rad��
            double m_dbCuc = 0.0;

            // DF090: GPS���ǹ��ƫ���ʣ��޵�λ��
            // DF301: Galileo���ǹ��ƫ���ʣ��޵�λ��
            // DF439: QZSS���ǹ��ƫ���ʣ��޵�λ��
            // DF502: BDS���ǹ��ƫ���ʣ��޵�λ��
            double m_dbEccentricity = 0.0;

            // DF091: GPS����γ�ȷ��ǵ����ҵ��͸�������������λrad��
            // DF302: Galileo����γ�ȷ��ǵ����ҵ��͸�������������λ rad��
            // DF440: QZSS����γ�ȷ��ǵ����ҵ��͸�������������λ rad��
            // DF503: BDS����γ�ȷ��ǵ����ҵ��͸�������������λ rad��
            double m_dbCus = 0.0;

            // DF092: GPS���ǹ���������ƽ������
            // DF303: Galileo���ǹ���������ƽ���� ��
            // DF441: QZSS���ǹ���������� 42,164,200m ֮���ƽ������
            // DF504: BDS���ǹ���������� 42,164,200m ֮���ƽ������
            // �ο�RTCM STANDARD 10403.3���ݵ�λ:m1/2 ��Ҫת���ɳ���ģʽ��λ:m ת����ʽ��value * value
            double m_dbAHalf = 0.0;

            // DF093: GPS���������ο�ʱ�䣬��λs��
            // DF304: Galileo���������ο�ʱ�䡣
            // DF442: QZSS���������ο�ʱ�䣬��λ s��
            // DF505: BDS���������ο�ʱ�䣬��λ s��
            unsigned int m_ui32Toe = 0U;

            // DF094: GPS���ǹ����ǵ����ҵ��͸�������������λrad��
            // DF305: Galileo���ǹ����ǵ����ҵ��͸�������������λ rad��
            // DF443: QZSS���ǹ����ǵ����ҵ��͸�������������λ rad��
            // DF506: BDS���ǹ����ǵ����ҵ��͸�������������λ rad��
            double m_dbCic = 0.0;

            // DF095: GPS���ǰ��ο�ʱ������������ྭ
            // DF306: Galileo���ǰ��ο�ʱ������������ྭ
            // DF444: QZSS���ǰ��ο�ʱ������������ྭ
            // DF507: BDS���ǰ��ο�ʱ������������ྭ
            // �ο�RTCM STANDARD 10403.3����������(��λ:��) �Ѿ�ת���ɳ���ģʽ(��λ:deg)
            // ��λ��deg
            double m_dbOmega0 = 0.0;

            // DF096: GPS���ǹ����ǵ����ҵ��͸�������������λrad��
            // DF307: Galileo���ǹ����ǵ����ҵ��͸�������������λ rad��
            // DF445: QZSS���ǹ����ǵ����ҵ��͸�������������λ rad��
            // DF508: BDS���ǹ����ǵ����ҵ��͸�������������λ rad��
            double m_dbCis = 0.0;

            // DF097: GPS���ǲο�ʱ��Ĺ�����
            // DF308: Galileo���ǲο�ʱ��Ĺ�����
            // DF446: QZSS���ǲο�ʱ��Ĺ�����
            // DF509: BDS���ǲο�ʱ��Ĺ�����
            // �ο�RTCM STANDARD 10403.3����������(��λ:��) �Ѿ�ת���ɳ���ģʽ(��λ:deg)
            // ��λ��deg
            double m_dbI0 = 0.0;

            // DF098: GPS���ǹ���뾶�����ҵ��͸�������������λm��
            // DF309: Galileo���ǹ���뾶�����ҵ��͸�������������λ m��
            // DF447: QZSS���ǹ���뾶�����ҵ��͸�������������λ m��
            // DF510: BDS���ǹ���뾶�����ҵ��͸�������������λ m��
            double m_dbCrc = 0.0;

            // DF099: GPS���ǽ��ص����
            // DF310: Galileo���ǽ��ص����
            // DF448: QZSS���ǽ��ص����
            // DF511: BDS���ǽ��ص����
            // �ο�RTCM STANDARD 10403.3����������(��λ:��) �Ѿ�ת���ɳ���ģʽ(��λ:deg)
            // ��λ��deg
            double m_dbArgumentOfPerigee = 0.0;

            // DF100: GPS����������ྭ�仯��
            // DF311: Galileo����������ྭ�仯��
            // DF449: QZSS����������ྭ�仯��
            // DF512: BDS����������ྭ�仯��
            // �ο�RTCM STANDARD 10403.3����������(��λ:��/s) �Ѿ�ת���ɳ���ģʽ(��λ:deg/s)
            // ��λ��deg/s
            double m_dbOmegaDot = 0.0;

            // DF450:  QZSS ���ǹ����Ǳ仯�ʣ���λ ��/s
            double m_dbIODot = 0.0;

            // DF101: ��ʾ����L1 ��L2 �ź�Ƶ�ʵ�Ⱥ�ӳٲ��λs��
            // DF455:  LCQZSS �� L1 C/A ��Ⱥ�ӳ٣���λ s��LCQZSS �� QZSS L1 C/A ��L2C �ź��޵������������źš�
            double m_dbTgd = 0.0;

            // DF102: GPS0���ǽ���״̬��0=���е�������������1=ĳЩ�����е������ݲ�������
            // DF454: QZSS���ǽ���״̬��DF454 ÿ������λ����һ�������źţ���״̬��ʾ��Ӧ�źŵĿ����ԣ����λ(MSB)��0 =
            // ���е�������������1 = ���ֻ������е������������⡣
            // DF515: ��ʾBDS���ǽ�����Ϣ��0=���е�������������1=ĳЩ�����е������ݲ�������
            unsigned char m_ui8SvHealth = 0U;

            // DF103: ȡ�Ե���������֡1����4 �֣���1 λ���������£�0 = L2 P �뵼�����Ŀ��ã�1 = L2 P �뵼�����Ĳ����á�
            unsigned char m_ui8L2PDataFlag = 0U;

            // DF137: ������������֡2 ��10 �ֵĵ�17 λ��0 = ������ϼ��Ϊ4 Сʱ��1 = ������ϼ������4 Сʱ��
            // DF457: ��ʾ������ϼ����DF457=0 ��ʾ��ϼ��Ϊ 2h��DF457=1 ��ʾ��ϼ������ 2h
            unsigned char m_ui8FitInterval = 0U;

            // DF286 Galileo SISA Index (E1,E5b)
            unsigned char m_ui8SISAIndex = 0U;
            // DF290: Galileo�������ݵ��ھ�ţ��޵�λ��
            unsigned char m_ui16IODnav = 0U;
            // DF291: Galileo���ǵ� SIS ���ȣ��� Galileo OS-SIS-ICD-1.1 �ж����˸ñ����ֶΣ���δ�����������ݡ�
            unsigned char m_ui8SvSisa = 0U;
            // DF312: Galileo���� E1/E5a ����Ⱥ�ӳ٣���λ s��
            double m_dbBgdE1E5a = 0.0;
            // DF313: Galileo ���� E5b/E1 ����Ⱥ�ӳ٣���λ s��
            double m_dbBgdE5bE1 = 0.0;
            // DF314: Galileo���� E5a �źŽ���״����0 = �źŽ�����1 = �źŲ����ã�2 = �źŴ��ڲ����С�
            unsigned char m_ui8OSHS = 0U;
            // DF315: Galileo���� E5a �ϵ������ݵ���Ч��״̬�����ڸ����û��������ݵ�����ˮƽ�����磬���ǲ����ã���
            unsigned char m_ui8OSDVS = 0U;
            // DF316: The E5b Signal Health Status Bit Values are:
            // 0 - Signal OK
            // 1 - Signal out of service
            // 2 - Signal will be out of service
            // 3- Signal Component currently in Test
            unsigned char m_ui8E5bSignalHealthStatus = 0U;
            // DF317 Galileo SOL NAV Data Validity Status
            unsigned char m_ui8E5bDataValidityStatus = 0U;
            // 287 Galileo E1-B Signal Health Status
            unsigned char m_ui8E1bSignalHealthStatus = 0U;
            // 288 Galileo E1-B  Data Validity Status
            unsigned char m_ui8E1bDataValidityStatus = 0U;

            // DF492: BDS����������������
            unsigned char m_ui8AgeOfDataEphemeris = 0U;
            // DF497: BDS ������ʱ���������ڣ��޵�λ��
            unsigned char m_ui8AgeOfDataClock = 0U;
            // DF513: BDS����B1I �����豸ʱ�Ӳ��λns��
            double m_dbTgd1 = 0.0;
            // DF514:BDS����B2I �����豸ʱ�Ӳ��λns��
            double m_dbTgd2 = 0.0;
            // Reserved
            unsigned char m_ui8Reserved = 0U;
        };

        /**
         * @class   : SGlonassEphemeris
         * @author  : wuchuanfei@sixents.com
         * @brief   : Glonass�����ṹ��
         * @note    : ����Glonass��������
         */
        struct SGlonassEphemeris
        {
            // Contents of GLONASS Satellite Ephemeris Data, Message Type 1020
            // DF002: �������ͺ�,�������ֲ�ֵ��ġ�
            unsigned char m_ui16MsgType = 0U;
            // DF038: GLONASS ��������λ�š�
            unsigned char m_ui8SatId = 0U;
            // DF040: GLONASS ���ǵ�Ƶ��ͨ���š�ͨ�� DF038 �� DF040���û���������Ϳ�֪�����ǵ�Ƶ�ʡ�
            unsigned char m_ui8SatFrequencyChannelNumber = 0U;
            // DF104: GLONASS ���齡��״��
            unsigned char m_ui8AlmanacHealth = 0U;
            // DF105: ���齡��״�������Ա�־
            // AHAI means AlmanacHealthAvailabilityIndicator
            unsigned char m_ui8AHAI = 0U;
            // DF106: GLONASS P1 ��
            unsigned char m_ui8P1 = 0U;
            // DF107:���� GLONASS��֡�����Ϊ����ʱ�䡣(bits 11 - 7 : 0 - 23 bits 6 - 1 : 0 - 59 bit 0 : 0 - 1)
            unsigned char m_ui16Tk = 0U;
            // DF108: ��������״����־��
            unsigned char m_ui8MsbOfBn = 0U;
            // DF109 : P2 ������ԡ�
            unsigned char m_ui8P2 = 0U;
            // DF110: GLONASS �������ݵĲο�ʱ�䡣(��λ:15min)
            unsigned char m_ui16Tb = 0U;
            // DF111: ������� PZ-90 ����ϵ�� GLONASS �����ٶ�ʸ���� X ����
            double m_dbXnTbFirstDerivative = 0.0;
            // DF112: ������� PZ-90 ����ϵ�� GLONASS �����ٶ�ʸ���� X ����
            double m_dbXnTb = 0.0;
            // DF113: ������� PZ-90 ����ϵ�� GLONASS �����ٶ�ʸ���� X ����
            double m_dbXnTbSecondDerivative = 0.0;
            // DF114: ������� PZ-90 ����ϵ�� GLONASS �����ٶ�ʸ���� Y ����
            double m_dbYnTbFirstDerivative = 0.0;
            // DF115: ������� PZ-90 ����ϵ�� GLONASS �����ٶ�ʸ���� Y ����
            double m_dbYnTb = 0.0;
            // DF116: ������� PZ-90 ����ϵ�� GLONASS �����ٶ�ʸ���� Y ����
            double m_dbYnTbSecondDerivative = 0.0;
            // DF117: ������� PZ-90 ����ϵ�� GLONASS �����ٶ�ʸ���� Z ����
            double m_dbZnTbFirstDerivative = 0.0;
            // DF118: ������� PZ-90 ����ϵ�� GLONASS �����ٶ�ʸ���� Z ����
            double m_dbZnTb = 0.0;
            // DF119: ������� PZ-90 ����ϵ�� GLONASS �����ٶ�ʸ���� Z ����
            double m_dbZnTbSecondDerivative = 0.0;
            // DF120: ��ʾ P3 ������ԡ�
            unsigned char m_ui8P3 = 0U;
            // DF121: ��Ԥ�Ƶ� GLONASS �����ز�Ƶ�ʵ��������������ֵ����
            double m_dbGammaTb = 0.0;
            // DF122: GLONASS M ���ǵ� P ���־��
            unsigned char m_ui8GmP = 0U;
            // DF123: GLONASS ����������֡�ĵ������ַ�������ȡ�� l n �֡�
            unsigned char m_ui8GmLn3 = 0U;
            // DF124: ��� GLONASS ϵͳʱ�������ʱ�������
            double m_dbTnTb = 0.0;
            // DF125: GLONASS L2 �Ӵ��� L1 �Ӵ��д��䵼�� RF �ź�֮���ʱ��
            double m_dbGmDeltaTn = 0.0;
            // DF126: GLONASS �������ݵ����ڡ�
            unsigned char m_ui8En = 0U;
            // DF127: GLONASS M ���ǵ� P4 ���־��
            unsigned char m_ui8GmP4 = 0U;
            // DF128: Tb ʱ�� GLONASS-M ���� URA ����ֵ
            unsigned char m_ui8GmFt = 0U;
            // DF129: ������Ϊ����ģ��������һ��һ�տ�ʼ�� GLONASS ������������� DF129 ��Ϊ�㣬����ֵ������� t b
            // ��Ӧ���������ļ���ֵ��
            unsigned char m_ui16GmNt = 0U;
            // DF130:  GLONASS �������͡�01 = GLONASS - M ���ǣ����� GLONASS - M �����ֶξ���Ч��00 = �� GLONASS - M
            // ���ǣ����� GLONASS - M �����ֶ���Ч��
            unsigned char m_ui8GmM = 0U;
            // DF131: ��ʾ�������Ƿ��������֡�����ַ�����ȡ���� GLONASS �������ĵ������������
            // DF132~DF136������Щ����������Ԥ������������ݣ��������ڶ�λ����ʱ��1 = �����а����������ݣ�0 = DF132~DF136
            // ��Ч��ȡֵ����� AOAD means AvailabilityOfAdditionalData
            unsigned char m_ui8AOAD = 0U;
            // DF132: ��ʾ������Ϊ���ڵģ����� �� C ��ʹ�� GLONASS ����������
            unsigned char m_ui16NA = 0U;
            // DF133: ��ʾ�� N A ����ʼʱ��Ϊ�ο��� GLONASS ϵͳʱ�� UTC��SU��֮�
            double m_dbTc = 0.0;
            // DF134: ��ʾ�� 1996 �꿪ʼ�ģ��� 4 ��Ϊ���ڵ���������
            unsigned char m_ui8GmN4 = 0U;
            // DF135: ��ʾ����֡�е� 5 ���ַ�������ȡ���� GLONASS-M l n �֡�
            double m_dbGmTGps = 0.0;
            // DF136: ��ʾ����֡�е� 5 ���ַ�������ȡ���� GLONASS-M l n �֡�
            unsigned char m_ui8GmLn5 = 0U;
            // Reserved
            unsigned char m_ui8Reserved = 0U;
        };

        struct SStandardTime
        {
            int m_year;
            int m_month;
            int m_day;
            int m_hour;
            int m_minute;
            double m_seconde;
            int m_timeType;
        };

        struct SGNSSTime
        {
            int m_week;
            double m_secAndMsec;
            int m_satType;
        };

        // �������
        struct SBLH
        {
            double m_lon;
            double m_lat;
            double m_height;
        };

        // �ռ�ֱ������
        struct SXYZ
        {
            double m_x;
            double m_y;
            double m_z;
        };

        // վ������
        struct SENU
        {
            double m_east;
            double m_north;
            double m_up;
        };
    } // end namespace GNSSUtilityLib
} // end namespace sixents

#endif