/*实验6程序设计5：8个任务函数*/
#include <stdio.h>
#include <string.h>
#define re register
#define maxn 1005
char s[maxn];
int  a [maxn];
char c;
void task0()
{
    puts("task0 is called!");
}
 void task1()
{
    puts("task1 is called!");
}

 void task2()
{
    puts("task2 is called!");
}

 void task3()
{
    puts("task3 is called!");
}

 void task4()
{
    puts("task4 is called!");
}

 void task5()
{
    puts("task5 is called!");
}

 void task6()
{
    puts("task6 is called!");
}

 void task7()
{
    puts("task7 is called!");
}

 void execute(void(*a[])(), int cnt)
{
    for (re int i = 0; i < cnt; i++)
    {
        a[i]();
    }
}

  void(*p1[8] )() = {task0,task1,task2,task3,task4,task5,task6,task7};//函数指针数组的使用
void scheduler()
{
    char str[20];
    int i;
    void (*a[20])();
    scanf_s("%s", str,20);
    for (i = 0; str[i] != 0; i++) {
        a[i] = p1[str[i] - '0'];
    }
    execute(a, i);
  
}

int main0610()
{
    scheduler();
    return 0;
}
