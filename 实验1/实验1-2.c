/*实验1程序设计整数向左端靠齐*/
#include<stdio.h> 
int main0103()
{
    unsigned short  x, m, n, ans;
    scanf_s("%hx%hd%hd", &x, &m, &n);
    if (m >= 0 && m <= 15 && n >= 1 && n + m <= 16)
    {
        ans = (x >> m) << (16 - n);
        printf("%hx\n", ans);
    }
    else printf("error\n");
    return 0;
}