/*实验5 程序改错与跟踪调试题程序*/
#include<stdio.h>
void strcate(char[], char[]);
void strdelc(char[], char);
int main0501(void)
{
	char a[] = "Language", b[100] = "Programming";
	printf("%s %s\n", b, a);
	strcate(b, a); printf("%s %s\n", b, a);
	strdelc(b, 'a'); printf("%s\n",b);
	return 0;
}
void strcate(char t[], char s[])
{
	int i = 0, j = 0;
	while (t[i++]); i--;
	while ((t[i++] = s[j++]) != '\0');
}
void strdelc(char s[], char c)
{
	int j, k;
	for (j = k = 0; s[j] != '\0'; j++)
		if (s[j] != c) s[k++] = s[j];
	while (k <= j)s[k++] ='\0';
}