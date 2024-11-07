/*实验8程序设计题*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define re register
#define maxn 10005

char s[maxn], s1[maxn], s2[maxn], ans[maxn], space[] = " ", tmp[maxn], * p;
int cnt;

int main0804()
{
    scanf("%s%s", s1, s2);
    freopen("experiment/src/step8/source.txt","r",stdin) ;
    while (scanf("%s", s) != EOF)
    {
        if ((p = strstr(s, s1)) != NULL)
        {
            re int num = 0;
            for (num = 0; s[num] != *p; num++)
                tmp[num] = s[num];
            strcat(ans, tmp);
            memset(tmp, 0, sizeof(tmp));
            strcat(ans, s2);
            for (re int i = 0, j = strlen(s1) + num; s[j]; j++, i++)
                tmp[i] = s[j];
            strcat(ans, tmp);
            memset(tmp, 0, sizeof(tmp));
            cnt++;
        }
        else
        {
            strcat(ans, s);
        }
        strcat(ans, space);
    }
    printf("%d\n", cnt);
    printf("%s", ans);
    return 0;
}
