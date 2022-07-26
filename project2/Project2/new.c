#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int p = 2022;
//常量分类
//1.字面常量 如10 145 'a' "adfafsdf"
//2.const修饰的常变量
const int num = 10;//则不可修改此时num为常变量 它的本质还是变量
//3.#define定义的标识符常量
//4.枚举常量 可以一一列举的常量 如abo血型 性别 有固定选项

//字符串 用双引号括起来的即为字符串 "dfawefagae"  字符串后面隐藏了一个\0 \0是字符串的结束标志