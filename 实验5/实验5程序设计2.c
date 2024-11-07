/*实验5程序设计2：实现成绩多功能菜单*/
#include <stdio.h>
#define maxn 10005
struct student
{
    char name[15];
    int score;
}stu[maxn], r[maxn];
int n, order, first = 1, last, cnt = 0;
void func1()
{
    scanf_s("%d", &n);
    cnt += n;
    last = first + n - 1;
    for ( int i = first; i <= last; i++)
    scanf_s("%s %d", stu[i].name, &stu[i].score);
    printf("%d records were input!\n", n);
    first = last + 1;
}
void swap(struct student* x, struct student* y)
{
    struct student tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
void msort(int s, int t)
{
    if (s == t) return;
     int mid = (s + t) >> 1;
    msort(s, mid);
    msort(mid + 1, t);
    int i = s, j = mid + 1, k = s;
    while (i <= mid && j <= t)
    {
        if (stu[i].score >= stu[j].score)
            swap(&r[k++], &stu[i++]);
        else
            swap(&r[k++], &stu[j++]);
    }
    while (i <= mid)
        swap(&r[k++], &stu[i++]);
    while (j <= t)
        swap(&r[k++], &stu[j++]);
    for ( int i = s; i <= t; i++)
        swap(&r[i], &stu[i]);
}
void func2()
{
    msort(1, cnt);
    printf("Reorder finished!\n");
}
void func3()
{
    for ( int i = 1; i <= cnt; i++)
        printf("%s %d\n", stu[i].name, stu[i].score);
}
void func4()
{
    int x, sign = 0;
    scanf_s("%d", &x);
    for ( int i = 1; i <= cnt; i++)
    {
        if (stu[i].score == x)
        {
            printf("%s %d\n", stu[i].name, stu[i].score);
            sign = 1;
        }
    }
    if (!sign) printf("not found!\n");
}
int main0505()
{
    while (1)
    {
        scanf_s("%d", &order);
        if (order == 1) func1();
        if (order == 2) func2();
        if (order == 3) func3();
        if (order == 4) func4();
        if (order == 0) break;
    }
    return 0;
}
