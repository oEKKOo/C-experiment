/*实验6程序设计第二题：长整型变量按字节输出*/
#include<stdio.h>
unsigned long int x;
int main0607()
{
	scanf_s("%u", &x);
	unsigned short*p = (unsigned short*)&x;
	printf("%.4X%.4X", *(p + 1), *p);
	return 0;
}