/*实验2-1改错程序：合数判断器*/
#include<stdio.h>
int main0203()
{
	int x,flag;
	int	i = 1;
	printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
	while (scanf_s("%d", &x) != EOF)
	{
	flag = 0;
	i = 1;
	do {
		i++;
		if (!(x % i)) {
			flag = 1;
			break;
		}
	    } while (x >= i + 2);
	if (flag == 1)
		printf("%d是合数\n", x);
	else printf("%d不是合数\n", x); 
    }
	return 0;
}
