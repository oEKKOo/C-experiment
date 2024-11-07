/*实验3-2替换题程序：计算s=1!+2!+...+n!*/
#include <stdio.h>
long long sum_fac1(int n);
int main0302(void)
{
	int k;
	for (k = 1; k <= 20; k++)
		printf("k=%d\t the sum is %lld\n", k, sum_fac1(k));
	return 0;
}
long long  sum_fac1(int n)
{
	if (n == 1)return 1;
	long long fac = 1;
		for (int i = 1; i <= n; i++) {
			fac *= i;
		}
	return fac+sum_fac1(n-1);
}