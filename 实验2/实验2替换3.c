/*实验2-1改错程序：合数判断器*/
#include<stdio.h>
int abs1(int x)
{
	for (int i = 2 ; x>=i+1; i++)
		if (x % i == 0)return 1;
	return  0;
}
int main0204()
{
	for(int i=100;i<=999;i++)
	{
		if (abs1(i) && abs1(i / 10) && abs1(i / 100))
			printf("%-5d", i);
	}
	return 0;
}