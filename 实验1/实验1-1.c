/*ʵ��1������ƴ�дת����Сд*/
#include<stdio.h>
int  main0102 ()
{
	char c;
	scanf_s("%c", &c,2);
	while ((c = getchar()) != EOF)
	{
		if (c >= 'A' && c <= 'Z')
		{
			putchar(c + 32);
		 }
		else  {
			putchar(c);
		}
	}
	return 0;
}