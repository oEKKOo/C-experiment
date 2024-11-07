/*实验6源程序改错*/
#include<stdio.h>
#define N 10005
char* strcopy(char*, const char*);
int main0601(void)
{
	char s1[N], s2[N], s3[N];
	printf("Input a string:\n", s2);
	scanf_s("%s", s2,10005);
	strcopy(s1, s2);
	printf("%s\n", s1);
	printf("Input a string again:\n", s2);
	scanf_s("%s", s2,10005);
	strcopy(s3, s2);
	printf("%s\n", s3);
	return 0;
}
/*½«×Ö·û´®s¸´ÖÆ¸ø×Ö·û´®t£¬²¢·µ»Ø´®tµÄÊ×µØÖ·*/
char* strcopy(char* t, const char* s)
{
	char* x = t;
	while (*t++ = *s++);
	return(x);
}
