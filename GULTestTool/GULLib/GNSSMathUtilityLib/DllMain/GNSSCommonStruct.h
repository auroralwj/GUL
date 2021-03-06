﻿#pragma once

namespace sixents
{
    namespace Math
    {
        // bool类型
        using BOOL_T = bool; ///< 注意此类型不能用vector容器封装

        // 有符号类型定义
        using INT8 = signed char; ///< 8位整型 用来代替char
        using INT16 = short;      ///< 16位整型 用来代替short
        using INT32 = int;        ///< 32位整型
        using INT64 = long long;  ///< 64位整型

        // 无符号类型定义
        using CHAR = char;                 ///< 8位符号 char
        using BYTE = unsigned char;        ///< 8位无符号整型 unsigned char 和 byte类型
        using UINT8 = unsigned char;       ///< 8位无符号整型 unsigned char 和 byte类型
        using WORD = unsigned short;       ///< 双字节
        using UINT16 = unsigned short;     ///< 双字节 同(WORD)
        using UINT32 = unsigned int;       ///< 32位无符号整型
        using UINT64 = unsigned long long; ///< 64位无符号整型

        // 浮点类型数据定义
        using FLOAT = float;   ///< 32位浮点数
        using DOUBLE = double; ///< 64位浮点数

        // 指针类型
        using PVOID = void*;       ///< 主要是用于CParam传输
        using PCSTR = const char*; ///< C类型的字符串处理

        // DOUBLE值 是否为0 的比较
        const static DOUBLE DOUBLE_ZONE_LITTLE = -1E-9; ///< DOUBLE值是否为0比较时的最小值
        const static DOUBLE DOUBLE_ZONE_BIG = 1E-9;     ///< DOUBLE值是否为0比较时的最大值

        // 错误码定义
        static const INT32 RETURN_SUCCESS = 0;            ///< 成功
        static const INT32 RETURN_FAIL = -1;              ///< 失败
        static const INT32 RETURN_NULL_PTR = -2;          ///< 返回空指针
        static const INT32 RETURN_NEW_PTR_FAILED = -3;    ///< new指针失败
        static const INT32 RETURN_PTR_LENGTH_ERROR = -4;  ///< 指针长度不正确
        static const INT32 RETURN_TIME_TYPE_ERROR = -5;   ///< 时间类型错误
        static const INT32 RETURN_ERROR_PARAMETER = -6;   ///< 输入的参数有误
        static const INT32 RETURN_NOT_SQUARE_MATRIX = -7; ///< 非方阵
        static const INT32 RETURN_ZERO_DETERMINANT = -8;  ///< 行列式为0
    }                                                     // namespace Math
} // end namespace sixents
