/*实验4-2程序修改替换题程序*/
#include<stdio.h>
#define max(a,b,c) (a>b)?(a>c?a:c):(c>b?c:b)
float sum(float x, float y);
int main0403(void)
{
	int a, b, c;
	float d, e;
	printf("Input three integers:");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("\nThe maximum of them is %d\n", max(a, b, c));
	printf("Input two floating point numbers:");
	scanf_s("%f %f", &d, &e);
	printf("\nThe sum of them is  %f\n", sum(d, e));
	return 0;
}
float sum(float x, float y)
{
	return x + y;
}