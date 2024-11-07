/*实验2-1改错程序：合数判断器*/
#include<stdio.h>
int main0201()
{
	int i, x,k;
	printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
	while (scanf_s("%d", &x) != EOF) {
		int flag = 0;
		for (i=2,k=x>>1;x>=i+1;i++)
			if (!(x % i)) {
				flag = 1;
				break;
			}
		if (flag == 1)printf("%d是合数\n", x);
		else printf("%d不是合数\n", x);
	}
	return 0;
}