﻿/*实验6修改替换第二题：转移表法*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
char* (*ope[])(char a[], const char b[]) = { strcpy,strcat,strtok };
int main0605(void)
{
	char* (*p)(char a[], const char b[]);
	char a[80], b[80], * result;
	int choice;
	while (1)
	{
		do 
		{
			printf("\t\t1 copy string.\n");
			printf("\t\t2 connect string.\n");
			printf("\t\t3 parse string.\n");
			printf("\t\t4 exit.\n");
			printf("\t\tinput a number(1-4)please.\n");
			scanf_s("%d", &choice);
		} while (choice < 1 || choice>4);
		if (choice == 4)goto down;
		getchar();
		printf("input the first string please!\n");
		scanf("%s", a);
		printf("input the second string please!\n");
		scanf("%s", b);
		result = (ope[choice - 1])(a, b);
		printf("the result is %s\n", result);
	}
    down:
	return 0;
}