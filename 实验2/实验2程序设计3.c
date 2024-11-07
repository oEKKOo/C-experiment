/*打印整齐的杨辉三角形*/
#include<stdio.h>
#define N 15
int main0208()
{
	int i,k,n;

	int c[N][N];
	scanf_s("%d",&n);//输入打印行数
	c[0][0] = 1;
	for (i = 0; i <= n; i++)
	{
		c[i][0] = c[i][i] = 1;
	}
	for (i = 1; i <= n; i++)
	{
		for (k = 1; k < i; k++)
		{
			c[i][k] = c[i - 1][k] + c[i - 1][k - 1];
		}
	}
	for (i = 0; i <= n; i++)
	{
		for ( k = 1; k <= n + 2 * (n - i); k++)
		{
			printf(" ");
		}
		for (k = 0; k <= i; k++)
		{
			printf("%-4d", c[i][k]);
		}
		printf("\n");
	}
	return 0;
}