/*实验5程序设计1：整数存储字符数组并输出*/
#include<stdio.h>
#define M 40
int main0504()
{
	int x = 0;
	scanf_s("%d", &x);
		int arr[M] ;
		int i = 0;
		for (i = 1; i<=32; i++)
		{
			arr[i] = x&1 ? '1' : '0';
			x >>= 1;
		}
		for (i = 32; i >= 1; i--)
		{
				printf("%c", arr[i]);
		}
	return 0;
}
#include<stdio.h>
int main050401()
{
	int x = 0;
	while (scanf_s("%x", &x) != EOF)
	{
		int arr[100] = { 0 };
		int i = 0;
		for (i = 1; i<=32; i++)
		{
			int a = x % 2;
			x = x /2;
			arr[i] = a;
		}
		for (i =32; i >= 1; i--)
		{
				printf("%d", arr[i]);
		}
	}
	return 0;
}
