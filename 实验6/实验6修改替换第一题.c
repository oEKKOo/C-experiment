/*ʵ��6�޸��滻��һ�⣺����ָ���βθ�дstrsort����*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 4
/*��ָ������sָ���size���ַ���������������*/
void strsort1(char**s, int size)
{
	char* temp;
	int i, j;
	for (i = 0; i < size - 1; i++)
		for (j = 0; j < size - i - 1; j++)
			if (strcmp(*(s+j),*(s+j + 1)) > 0)
			{
				temp = *(s+j);
				(*(s+j)) = *(s+j + 1);
				*(s+j + 1) = temp;
			}
}
int main0603()
{
	int i;
	char* s[N], t[50];
	for (i = 0; i < N; i++)
	{
		gets_s(t, 50);
		s[i] = (char*)malloc(strlen(t) + 1);
		strcpy(s[i], t);
	}
	strsort1(s, N);
	for (i = 0; i < N; i++) { puts(s[i]); free(s[i]); }
	return 0;
}