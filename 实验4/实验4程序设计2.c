/*实验4-4程序设计题2：编译过程转换*/
#include<stdio.h>
#include<string.h>
#include<math.h>
//#define CHANGE1
#define CHANGE0
#define A 10005
char s[A];
int main0406()
{
	gets(s);
#ifdef CHANGE1
	{
	int length = strlen(s);
	for (int i = 0; i < length; i++) 
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			printf("%c",s[i] += 32);
		else if (s[i] >= 'a' && s[i] <= 'z')
			printf("%c",s[i] -= 32);
		else printf("%c", s[i]);
	}
	}
#endif
#ifdef CHANGE0
	{
		printf("%s", s);
}
#endif

	return 0;
}