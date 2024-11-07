//工资计算
#include<stdio.h>
double x;
int main0206()
{
	scanf_s("%lf", &x);
	int y = x / 1000;
	switch (y)
	{

	case 0:printf("收取税金为%d", 0); break;
	case 1:printf("收取税金为%.2lf", 0.05 * (x - 1000)); break;
	case 2:printf("收取税金为%.2lf", 0.10 * (x - 2000) + 50); break;
	case 3:printf("收取税金为%.2lf", 0.15 * (x - 3000) + 150); break;
	case 4:printf("收取税金为%.2lf", 0.20 * (x - 4000) + 300); break;
	case 5:printf("收取税金为%.2lf", 0.25 * (x - 5000) + 500); break;
	}
	return 0;
}