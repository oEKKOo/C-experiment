/*ʵ��3��������������ж�*/
#include <stdio.h>
#define N 100
int k, num;
int a[N];
int npower(int x, int y)
{
    int power = 1;
    while (y)
    {
        if (y & 1) power *= x;
        x = x*x; y >>= 1;
    }
    return power;
}
int judgeselfnum(int k)
{
    for ( int i = npower(10, k - 1); i <= npower(10, k) - 1; i++)
    {
        int p = i, sum = 0;
        while (p)
        {
            int x = p % 10;
            sum += npower(x, k);
            p /= 10;
        }
        if (sum == i) 
            a[++num] = i;
    }
    if (k == 3) printf("3λ��ˮ�ɻ�������%d��", num);
    if (k == 4) printf("4λ����Ҷõ��������%d��", num);
    if (k == 5) printf("5λ�������������%d��", num);
    if (k == 6) printf("6λ������������%d��", num);
    if (k == 7) printf("7λ�ı�����������%d��", num);
    if (k == 8) printf("8λ�İ���������%d��", num);
    for ( int i = 1; i < num; i++)
        printf("%d,", a[i]);
    printf("%d\n", a[num]);  
    num = 0;
}
int main0307()
{
    while (1)
    {
        scanf_s("%d", &k);
        if (k == 0) break;
        judgeselfnum(k);
    }
    return 0;
}
