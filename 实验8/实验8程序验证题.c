/*实验8程序验证题：观察运行结果*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main0801(void)
{
	short a = 0x253f, b = 0x7b7d;
	char ch;
	FILE* fp1, * fp2;
	fp1 = fopen("d:\\abc1.bin", "wb+");
	fp2 = fopen("d:\\abc2.txt", "w+");
	fwrite(&a, sizeof(char), 1, fp1);
	fwrite(&b, sizeof(char), 1, fp1);
	fprintf(fp2, "%hx %hx", a, b);
	rewind(fp1); rewind(fp2);
	while ((ch = fgetc(fp1)) != EOF)
		putchar(ch);
	putchar('\n');
	while ((ch = fgetc(fp2)) != EOF)
		putchar(ch);
	putchar('\n');
	fclose(fp1);
	fclose(fp2);
	return 0;
}
