/*实验3程序设计完全数寻找*/
#include<stdio.h>
#define p 10000
int divisor = 0;
int a[p];
int judgePerfectnum(int x)
{
	int sum = 0;
	 divisor = 0;
	for (int i = 1; i <= x; i++)
	{
		if (x % i == 0) 
			a[++divisor] = i;
	}
	for (int i = 1; i <= divisor-1; i++)
		sum += a[i];
	if (sum == x)
	{
		sum = 0; return 1;
	}
	sum = 0; return 0;
}
void print001(int y)
{
	printf("%d=", y);
	for (int i = 1; i < divisor-1 ; i++)
	{
		printf("%d+", a[i]);
	}
	printf("%d\n", a[divisor - 1]);	
}
int main0306()
{
	for (int i = 2; i <= 10000; i++)
		if (judgePerfectnum(i))print001(i);
	return 0;
} 