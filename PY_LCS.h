#pragma once

/*
* 函数名：longest_common_substring
* 作者：PY-Chen
* 日期：2017-8-15
* 功能：计算两个字符串中最长的公共字符串长度，区分字母大小写。
* 输入参数：
*     pStr1:第一个字符串指针；
*     pStr2:第二个字符串指针；
* 输出参数：
*     无
* 返回值：
*     -1：函数出错；
*      0：无公共子字符串；
*    N>0：公共字符串长度；
* 修改记录：
*     初始版本
*
*/
int longest_common_substring(char *pStr1, char *pStr2);