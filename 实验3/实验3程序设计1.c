/*ʵ��3�������1.��֤��°ͺղ���*/
#include <stdio.h>
#include <math.h>
#include<string.h>
int n;
int judgeprime(int a)
{
	for ( int i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0) return 0;
	}
	return 1;
}
int split(int a)
{
	for ( int i = 2; i <= a; i++)
	{
		if (judgeprime(i) && judgeprime(a - i))
		{
			printf("%d=%d+%d\n", a, i, a - i);
			break;
		}
	}
	return 0;
}
int main0305()
{
		printf("����ż��");
	while (scanf_s("%d", &n) != EOF)
		if (n >= 4 && n % 2 == 0) split(n);
	return 0;
}
