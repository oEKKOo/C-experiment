/*ʵ��2-1�Ĵ���򣺺����ж���*/
#include<stdio.h>
int main0201()
{
	int i, x,k;
	printf("�������жϺ��������������1����������Ctrl+Z����\n");
	while (scanf_s("%d", &x) != EOF) {
		int flag = 0;
		for (i=2,k=x>>1;x>=i+1;i++)
			if (!(x % i)) {
				flag = 1;
				break;
			}
		if (flag == 1)printf("%d�Ǻ���\n", x);
		else printf("%d���Ǻ���\n", x);
	}
	return 0;
}