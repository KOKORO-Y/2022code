#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("hellow world\n");
	printf("�ߺ�,���\n");
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
	printf("%d\n", age);   //%d=����  %f=�����ȸ�����  %lf=˫���ȸ�����
	printf("%lf\n", weight);//��{}��Ϊ�ֲ����� ����Ϊȫ�ֱ������ҵ�ȫ�ֱ�����ֲ��������Ƴ�ͻʱ�ֲ����ȣ����Բ������������


	int a = 0;
	int b = 0; 
	int sum = 0;
	scanf("%d,%d", &a,&b);
	sum = a + b;
	printf("sum=%d\n", sum);



	
	return 0;
}