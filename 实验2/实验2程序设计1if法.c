//���ʼ���
#include<stdio.h>
double x;
int main0205()
{
	scanf_s("%lf", &x);
	int y = x / 1000;
	if (y == 0)printf("��ȡ˰��Ϊ%d", 0);
	else if (y == 1)printf("��ȡ˰��Ϊ%.2lf", 0.05 * (x - 1000));
	else if (y == 2)printf("��ȡ˰��Ϊ%.2lf", 0.10 * (x - 2000)+50);
	else if (y == 3)printf("��ȡ˰��Ϊ%.2lf", 0.15 * (x - 3000)+150);
	else if (y == 4)printf("��ȡ˰��Ϊ%.2lf", 0.20 * (x - 4000)+300);
	else if (y == 5)printf("��ȡ˰��Ϊ%.2lf", 0.25 * (x - 5000)+500);
	return 0;
}