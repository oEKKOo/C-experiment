/*实验6程序设计第一题：main函数*/
#include<stdio.h>
int main0606(int argc, char* argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return 0;
} 