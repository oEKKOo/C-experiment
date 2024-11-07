/*源文件file.c的内容*/
#include<stdio.h>
#include "file.h"
int x, y;         /*外部变量的定义说明*/
char ch;          /*外部变量的定义说明*/
int main0407(void)
{
	x = 10;
	y = 20;
	ch = getchar();
	printf("in file1 x = % d, y = % d, ch is % c\n", x, y, ch);
	fun10000();
	return 0;
}