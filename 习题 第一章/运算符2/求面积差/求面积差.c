#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	float a = 0.00;
	float P = 3.14;
	scanf("%f", &a);
	float r = (a / 2);
	float Z = a * a;//���������
	float Y = P * r * r;//Բ�����
	printf("�����������%.2lf\n", Z);
	printf("Բ�������%.2lf\n", Y);
	printf("�����������Բ�������%.2lf\n", (Z - Y));

	return 0;
}