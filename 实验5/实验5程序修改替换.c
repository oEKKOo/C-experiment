/*ʵ��5�����޸��滻*/
/*���ɪ������*/
#include<stdio.h>
#define M 10
#define N 3
int main0503��1(void)
{
	int a[M + 1] = { 0 }, b = 0;
	for (int i = 1; i <= M; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (++b > M)b = 1;
			if (a[b])j--;
		}
		printf("%6d", b);
		a[b] = 1;
	}
	return 0;
}
int main0503()
{
	int a[M+1] = { 0 };
	int  count = 0, i = 0, k = 0;
	while (count != M)/*��������û������ѭ��*/
	{
		i++;/*�޲��������൱�ڸ������˱��˺�*/
		if (i > M)i = 1;
		if (a[i] == 0)k++;/*�����ѳ��ֵ��˵�λ�ò���ʼ����*/
		if (k ==N) {
			count++;/*ͳ���Ѿ������˵�����*/
			printf("%6d", i);
			a[i] = 1;/*�����ֵ��˱��*/
			k = 0;/*ÿ�δ�0��3������ÿ������*/
		}
	}
}
