//�����������������һ�����ϵĿո��ַ���һ���ո����
#include<stdio.h>
int main0207()
{
char  c;
int  flag = 0;
	while (scanf_s("%c", &c) != EOF) {
		if (c == ' ')
		{
			if (flag)continue;
			else
			{
				flag = 1;
				putchar(c);
			}
		}
		else
		{
			flag = 0;
			putchar(c);
		}
	}
return 0;
}