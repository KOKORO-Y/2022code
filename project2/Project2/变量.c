#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define max 10000
enum ABO
{
	A,//有值 从0开始 
	B,
	AB,
	O
};

//全局变量整个工程都能用,但是跨工程时要先声明(extern)
//变量的生命周期即变量创建到销毁的时间段
//局部变量生命周期进局部开始出局部生命结束
//全局变量生命周期就是程序的生命周期
int g = 114514;
extern int p;
extern int num;

int main()
{
	printf("G\n");
	int a = 10;
	int b = 666;
	printf("3:%d\n", p);

	printf("%d\n", a);//变量的作用域为{}内
	{
		printf("1:%d\n", b);
		printf("2:%d\n", g);
	}
	int n = max;
	printf("4:%d\n", n);
	enum ABO s = A;
	printf("5:%d\n", A);
	printf("6:%d\n", B);
	printf("7:%d\n", AB);
	printf("8:%d\n", O);
	{
		char arr[]="sdfawegf";
		char arr1[] = "abc";
		char arr2[] = { 'a','b','c','\0'};
		printf("9:%s\n", arr1);
		printf("10:%s\n", arr2);

		int len=strlen("abc");
		printf("11:%d\n", len);
		printf("12:%d\n", strlen(arr1));
		printf("13:%d\n", strlen(arr2));
		
	}

	return 0;
}