/*实验1程序设计IP地址*/
#include<stdio.h>
unsigned long int y;
int main0104()
{
	while (scanf_s("%ld",&y) != EOF)
	{
		unsigned long int x = 0x00000ff;
		printf("%d.%d.%d.%d\n", (y >> 24) & x, (y >> 16) & x, (y >> 8) & x, (y & x));
	}
	return 0;
}
