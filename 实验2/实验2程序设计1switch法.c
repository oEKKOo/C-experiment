//���ʼ���
#include<stdio.h>
double x;
int main0206()
{
	scanf_s("%lf", &x);
	int y = x / 1000;
	switch (y)
	{

	case 0:printf("��ȡ˰��Ϊ%d", 0); break;
	case 1:printf("��ȡ˰��Ϊ%.2lf", 0.05 * (x - 1000)); break;
	case 2:printf("��ȡ˰��Ϊ%.2lf", 0.10 * (x - 2000) + 50); break;
	case 3:printf("��ȡ˰��Ϊ%.2lf", 0.15 * (x - 3000) + 150); break;
	case 4:printf("��ȡ˰��Ϊ%.2lf", 0.20 * (x - 4000) + 300); break;
	case 5:printf("��ȡ˰��Ϊ%.2lf", 0.25 * (x - 5000) + 500); break;
	}
	return 0;
}