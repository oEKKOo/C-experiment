/*ʵ��2-1�Ĵ���򣺺����ж���*/
#include<stdio.h>
int main0203()
{
	int x,flag;
	int	i = 1;
	printf("�������жϺ��������������1����������Ctrl+Z����\n");
	while (scanf_s("%d", &x) != EOF)
	{
	flag = 0;
	i = 1;
	do {
		i++;
		if (!(x % i)) {
			flag = 1;
			break;
		}
	    } while (x >= i + 2);
	if (flag == 1)
		printf("%d�Ǻ���\n", x);
	else printf("%d���Ǻ���\n", x); 
    }
	return 0;
}
