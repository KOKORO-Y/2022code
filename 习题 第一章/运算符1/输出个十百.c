#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	printf("�����ֵ���������0С��1000\n");
	scanf("%d", &a);
	int b = a%10;//��λ
	int c = a/10%10;//ʮλ
	int d = a/100;//��λ
	printf("��λ��%d\n", b);
	printf("ʮλ��%d\n", c);
	printf("��λ��%d\n", d);

	return 0;
}