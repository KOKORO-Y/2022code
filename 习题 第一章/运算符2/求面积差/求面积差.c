#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	float a = 0.00;
	float P = 3.14;
	scanf("%f", &a);
	float r = (a / 2);
	float Z = a * a;//正方形面积
	float Y = P * r * r;//圆的面积
	printf("正方形面积：%.2lf\n", Z);
	printf("圆的面积：%.2lf\n", Y);
	printf("正方形面积比圆的面积大：%.2lf\n", (Z - Y));

	return 0;
}