/*ʵ��8Դ�����޸��滻������2������������ض���freopen��дmain����*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main0803(int argc, char* argv[])
{
	char ch;
	FILE* fp;
	if (argc != 2)
	{
		printf("Arguments error!\n");
		exit(-1);
	}
	if ((freopen(argv[1], "r", stdin)) == NULL)
	{       /* fp ָ�� filename */
		printf("Can't open %s file!\n", argv[1]);
		exit(-1);
	}
	while ((ch = getchar()) != EOF)          /* ��filename�ж��ַ� */
		putchar(ch);                  /* ����ʾ����д�ַ� */
	return 0;
}
