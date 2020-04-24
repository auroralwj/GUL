/** @file          CGlonassTime.h
 *  @brief         Glonassʱ����
 *  @details       N/A
 *  @author        wuchuanfei@sixens.com
 *  @date          2020/04/24
 *  @version       1.0
 *  @note          N/A
 *  @copyright     Copyright(c) 2019-2020 Beijing Sixents Technology Co., Ltd. All rights reserved.
 */

#ifndef _CGLONASS_TIME_H
#define _CGLONASS_TIME_H

#include "IGNSSTime.h"

namespace sixents
{
    namespace GNSSUtilityLib
    {
        /**
         *  @class       CGlonassTime
         *  @brief       Glonassʱ����
         *  @author      wuchuanfei@sixents.com
         *  @note
         */
        class CGlonassTime : public IGNSSTime
        {
        public:
            CGlonassTime();
            virtual ~CGlonassTime();

            virtual INT32 Format(std::string& formatString);

            virtual DOUBLE ToSec() const;
            virtual void ToStandTime(SStandardTime& time) const;

            virtual void SetTime(const DOUBLE& time);
            virtual void GetTime(DOUBLE& time) const;
            virtual void SetTime(const SStandardTime& time);
            virtual void GetTime(SStandardTime& time) const;

        private:
            SStandardTime m_time;
            DOUBLE m_sec; /* �����ʽ��ʾ��ʱ�� */
        };                // end class CGlonassTime
    }                     // end namespace GNSSUtilityLib
} // end namespace sixents

#endif