/*ʵ��6������Ƶڶ��⣺�����ͱ������ֽ����*/
#include<stdio.h>
unsigned long int x;
int main0607()
{
	scanf_s("%u", &x);
	unsigned short*p = (unsigned short*)&x;
	printf("%.4X%.4X", *(p + 1), *p);
	return 0;
}