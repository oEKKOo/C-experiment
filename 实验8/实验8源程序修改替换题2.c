/*实验8源程序修改替换函数题2：用输入输出重定向freopen改写main函数*/
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
	{       /* fp 指向 filename */
		printf("Can't open %s file!\n", argv[1]);
		exit(-1);
	}
	while ((ch = getchar()) != EOF)          /* 从filename中读字符 */
		putchar(ch);                  /* 向显示器中写字符 */
	return 0;
}
