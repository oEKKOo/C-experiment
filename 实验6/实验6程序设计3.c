/*实验6程序设计第三题:实现图像的旋转*/
#include <stdio.h>
#define maxn 10
int n, m;
int a[maxn][maxn];
int main0608()
{
    scanf_s("%d%d", &n, &m);
    for ( int i = 1; i <= n; i++)
        for ( int j = 1; j <= m; j++)
            scanf_s("%d", &a[i][j]);
    for ( int i = m; i >= 1; i--)
    {
        for ( int j = 1; j <= n - 1; j++)
            printf("%d ", a[j][i]);
        printf("%d\n", a[n][i]);
    }
    return 0;
}
