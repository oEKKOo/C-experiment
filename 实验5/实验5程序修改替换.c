/*实验5程序修改替换*/
/*求解瑟夫问题*/
#include<stdio.h>
#define M 10
#define N 3
int main0503，1(void)
{
	int a[M + 1] = { 0 }, b = 0;
	for (int i = 1; i <= M; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (++b > M)b = 1;
			if (a[b])j--;
		}
		printf("%6d", b);
		a[b] = 1;
	}
	return 0;
}
int main0503()
{
	int a[M+1] = { 0 };
	int  count = 0, i = 0, k = 0;
	while (count != M)/*当还有人没出局则循环*/
	{
		i++;/*无差别计数，相当于给所有人标了号*/
		if (i > M)i = 1;
		if (a[i] == 0)k++;/*跳过已出局的人的位置并开始计数*/
		if (k ==N) {
			count++;/*统计已经出局人的人数*/
			printf("%6d", i);
			a[i] = 1;/*给出局的人标记*/
			k = 0;/*每次从0到3，所以每次清零*/
		}
	}
}
