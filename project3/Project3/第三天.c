#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//int main()
//{
//	printf("c:\test\test.c\n");//ת���ַ�\t��Ϊ��������˼
//	printf("abccd\n");//\n���� \?��ֹ��ʶ��Ϊ����ĸ��
//	printf("%s\n", "\"");
//	printf("%s\n", ";");
//	printf("c:\\test\\test.c\n");
//	printf("\a");
//	printf("%c\n", '\130');//�˽��Ƶ�130
//	printf("%c\n", '\101');
//	printf("%c\n", '\x30');
//	printf("%d\n", strlen("abc"));
//	printf("%d\n",strlen("c:\test\328\test.c"));
//
//
//	
//	return 0;
//}

//int main()//ѡ�����
//{
//	int input = 0;
//	printf("�������:>\n");
//	printf("Ҫ�ú�ѧϰ��?(1/0)>:\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("̯���\n");
//
//	return 0;
//
//}


//int main()//ѭ�����
//{
//	int line = 0;
//	while(line<30000)
//	{
//		printf("д����:%d\n",line);
//			line++;
//	}
//	if (line==30000)
//	{
//		printf("��offer\n");
//	}
//	return 0;
//}

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;

}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//int sum = a + b;
//	int sum=Add(a, b);
//	printf("%d\n", sum);
//
//
//     return 0;
//}



int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	char ch[5] = { 'a','b','c','d'};
	int i = 0;
	while(i<10)
	{
		printf("%d", arr[i]);
		i++;
	}

	return 0;
}
