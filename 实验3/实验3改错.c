/*实验3-1改错题程序：计算s=1!+2!+...+n!*/
#include <stdio.h>
long long sum_fac(int n);
int main0301(void)
{
	int k;
	for (k = 1; k <= 20; k++)
		printf("k=%d\t the sum is %lld\n", k, sum_fac(k));
	return 0;
}
long long  sum_fac(int n)
{
	     long long s = 0;
		int i;
		long long fac = 1;
		for (i = 1; i <= n; i++) {
			fac *= i;
			s += fac;
		}
	return s;
}