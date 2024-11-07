/*打印三位数平方的后三位还是这个三位数*/
#include<stdio.h>
int main0209()
{
	int x,a;	
	for (x = 100; x < 1000; x++) {
		a = x * x;
		if (a % 1000 == x)
			printf("%d\n", x);
	}
	return 0;
}