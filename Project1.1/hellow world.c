#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("hellow world\n");
	printf("芜湖,起飞\n");
	printf("%d\n",114514);
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(long));


	int age = 19;
	double weight = 62.2;
	age = age + 2;
	weight = weight - 3;
	printf("%d\n", age);   //%d=整形  %f=单精度浮点形  %lf=双精度浮点型
	printf("%lf\n", weight);//在{}内为局部变量 外则为全局变量，且当全局变量与局部变量名称冲突时局部优先，所以不建议出现重名


	int a = 0;
	int b = 0; 
	int sum = 0;
	scanf("%d,%d", &a,&b);
	sum = a + b;
	printf("sum=%d\n", sum);



	
	return 0;
}