/*实验4-1改错与跟踪调试题程序：计算平方差，将换两数*/
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