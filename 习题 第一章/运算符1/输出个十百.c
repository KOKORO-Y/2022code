#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	printf("输入的值需满足大于0小于1000\n");
	scanf("%d", &a);
	int b = a%10;//个位
	int c = a/10%10;//十位
	int d = a/100;//百位
	printf("个位：%d\n", b);
	printf("十位：%d\n", c);
	printf("百位：%d\n", d);

	return 0;
}