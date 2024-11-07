/*实验3-2程序修改替换第（2）题程序*/
#include<stdio.h>
double mulx(double x, int n);
long fac(int n);
double sum0301(double x, int n)
{
	int i=1;
	 double z = 1.0;
	for (i = 1; i <= n; i++)
	{
		 z = z + mulx(x, i) / fac(i);
	}  
	return z;   
	/*int i;
	i = 1 + n;
	double z = 1.0;
	while(--i) 
	{
		z = z + mulx(x, i) / fac(i);
	}
	return z;*/
}
double mulx(double x,int n)
{
	//int i;
    static double z = 1.0;
		z = z * x;
	return z;
}
long fac(int n)
{
	
	static long h = 1;	
	h = h * n;	
	return h;
	/*int i;
	long h = 1;
	for (i = 2; i <= n; i++)
	{
		h = h * i;
	}
	return h;*/
}
int main0303()
{
	double x;
	int n;
	printf("Input x and n:");
	scanf_s("%lf%d", &x, &n);
	printf("The result is %lf:", sum0301(x, n));
		return 0;
}