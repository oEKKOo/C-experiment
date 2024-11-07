/*实验6程序设计第四题：输入n行文本修正*/
#include <stdio.h>
#include <string.h>
#define re register
#define maxn 100
char s[maxn];
int cnt;
void del(char s[])
{
    cnt = 0;
    char tmp[maxn];
    re int len = strlen(s), i = 0, j, k = 0;
    while (s[i++] == ' ');
    i--;
    for (re int j = i; j < len; j++)
        if (s[j] != '\t')
            tmp[k++] = s[j];
    cnt = strlen(tmp);
    for (re int i = 0; i < cnt; i++)
        s[i] = tmp[i];
}
int main0609()
{
    while (gets(s))
    {
        del(s);
        for (re int i = 0; i < cnt; i++)
            printf("%c", s[i]);
        putchar('\n');
    }
    return 0;
}
