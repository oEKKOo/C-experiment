/*ʵ��4-1�Ĵ�����ٵ�������򣺼���ƽ�����������*/
#include<stdio.h>
#define SUM (a+b)
#define DIF (a-b)
#define SWAP(a,b) p=a,a=b,b=p
int main0401()
{
	int a, b,p;
	printf("Input two integers a, b:");
		scanf_s("%d%d", &a, &b);
	printf("\nSUM=%d\n the difference between square of a and square of b is:%d", SUM, SUM * DIF);
	SWAP(a, b);
	printf("\nNow a=%d,b=%d\n", a, b);
	return 0;
}