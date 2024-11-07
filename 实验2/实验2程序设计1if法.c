//工资计算
#include<stdio.h>
double x;
int main0205()
{
	scanf_s("%lf", &x);
	int y = x / 1000;
	if (y == 0)printf("收取税金为%d", 0);
	else if (y == 1)printf("收取税金为%.2lf", 0.05 * (x - 1000));
	else if (y == 2)printf("收取税金为%.2lf", 0.10 * (x - 2000)+50);
	else if (y == 3)printf("收取税金为%.2lf", 0.15 * (x - 3000)+150);
	else if (y == 4)printf("收取税金为%.2lf", 0.20 * (x - 4000)+300);
	else if (y == 5)printf("收取税金为%.2lf", 0.25 * (x - 5000)+500);
	return 0;
}