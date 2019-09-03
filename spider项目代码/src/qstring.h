#pragma once
#ifndef QSTRING_H
#define QSTRING_H
// 拼接多个字符串
extern char* strcat2(int argc, const char* str1, const char* str2, ...);
// 剪切字符串，不重新分配内存
extern char* strim(char* str);
// 分割字符串
// count 分割后的字符串的长度
// limit 分割次数
extern char** strsplit(char* line, char delimeter, int* count, int limit);


// 把字符串yes或no转换成整数，错误返回-1
extern int yesnotoi(char* str);


#endif
