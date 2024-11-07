/*实验5程序设计3：求解N皇后*/
#include<stdio.h>
int crax[2000], cray[2000], cx[2000];
int ans[2000];
int n, tot;
void search(int x)
{
	if (x > n) tot++;
	for (int y = 1; y <= n; y++)
	{
		if (crax[x + y]) continue;
		if (cray[x - y + 10]) continue;
		if (cx[y]) continue;
		ans[x] = y;
		crax[x + y] = 1;
		cray[x - y + 10] = 1;
		cx[y] = 1;
		search(x + 1);
		crax[x + y] = 0;
		cray[x - y + 10] = 0;
		cx[y] = 0;
	}
}
int main050601(void)
{
	scanf_s("%d", &n);
	if (n == 2 || n == 3)
	{
		printf("无解");
		return 0;
	}
	search(1);
	printf("%d", tot);
	return 0;
}
/*N皇后递归算法*/
#include<stdio.h>
int attack1(int line, int list);
void findspace1(int line, int n);
//row既是当前行数，也是正在找地方的queen的序号

int queen1[13] = { 0 };
int solution1= 0;

int main0506(void) {
	int n;
	scanf_s("%d", &n);
	findspace1(0, n);
	if (n == 2 || n == 3)
	{
		printf("无解");
		return 0;
	}
	printf("%d", solution1);
	return 0;
}

int attack1(int line, int list) {
	for (int i = 0; i < line; i++) {
		if (list == queen1[i])
			return 1;
		if (line - i == queen1[i] - list || line - i == list - queen1[i])
			return 1;
	}
	return 0;
}

void findspace1(int line, int n) {
	if (line >= n) { //如果n个已经放完了
		solution1++;
		return;
	}
	for (int list = 0; list < n; list++) {
		if (attack1(line, list) == 0) {
			//第row行的第i个位置不会被攻击，把queen[row]放进去
			queen1[line] = list;
			findspace1(line + 1, n);//没放完，找下一个queen的位置
		}
	}
}