/*实验7表达式求值验证题*/
#include<stdio.h>
char u[] = "UVWXYZ";
char v[] = "xyz";
struct T {
	int x;
	char c;
	char* t;
}a[] = { {11,'A',u},{100,'B',v} }, * p = a;
int main0701()
{
	//printf("%d", (++p)->x);                     //100
	//p++; printf(" %c", p->c);                    //B
	//*p++->t; printf("%c ",  *p->t);                //x
	//printf("%c", *(++p)->t);                         //x
	//printf("%c", *++p->t);                         //V
	//printf("%c", ++ * p->t);                       //V
	return 0;
}