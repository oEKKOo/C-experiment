///*实验7程序设计3：进一步交换结点指针域的方法*/
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define re register
//#define maxn 20
//
//struct node
//{
//    int c_lan, English, math, physics;
//    char num[maxn], name[maxn];
//    struct node* next;
//    double average;
//} *head = NULL, * tail, * p;
//
//void fun1()
//{
//    int n;
//    scanf("%d", &n);
//    head = (struct node*)malloc(sizeof(struct node));
//    scanf("%s%s%d%d%d%d", head->num, head->name, &head->English, &head->math, &head->physics, &head->c_lan);
//    tail = head;
//    for (re int i = 1; i < n; i++)
//    {
//        tail->next = (struct node*)malloc(sizeof(struct node));
//        tail = tail->next;
//        scanf("%s%s%d%d%d%d", tail->num, tail->name, &tail->English, &tail->math, &tail->physics, &tail->c_lan);
//    }
//    tail->next = NULL;
//    struct node* tmp = head;
//    while (tmp)
//    {
//        int sum = tmp->English + tmp->math + tmp->physics + tmp->c_lan;
//        tmp->average = 1.0 * sum / 4;
//        tmp = tmp->next;
//    }
//    // puts("finish!") ;
//    printf("完成了%d位同学的成绩输入。\n", n);
//}
//
//void fun2()
//{
//    struct node* tmp = head;
//    while (tmp)
//    {
//        printf("%s %s %d %d %d %d\n", tmp->num, tmp->name, tmp->English, tmp->math, tmp->physics, tmp->c_lan);
//        tmp = tmp->next;
//    }
//}
//
//void fun3()
//{
//    struct node* tmp = head;
//    char ctmp[maxn];
//    int task, target;
//    scanf("%s%d", ctmp, &task);
//    while (tmp)
//    {
//        if (!strcmp(ctmp, tmp->num))
//        {
//            if (task == 0)
//            {
//                char ntmp[maxn];
//                scanf("%s", ntmp);
//                strcpy(tmp->name, ntmp);
//            }
//            if (task == 1)
//            {
//                scanf("%d", &target);
//                tmp->English = target;
//            }
//            if (task == 2)
//            {
//                scanf("%d", &target);
//                tmp->math = target;
//            }
//            if (task == 3)
//            {
//                scanf("%d", &target);
//                tmp->physics = target;
//            }
//            if (task == 4)
//            {
//                scanf("%d", &target);
//                tmp->c_lan = target;
//            }
//            printf("%s %s %d %d %d %d\n", tmp->num, tmp->name, tmp->English, tmp->math, tmp->physics, tmp->c_lan);
//            break;
//        }
//        tmp = tmp->next;
//    }
//}
//
//void fun4()
//{
//    struct node* tmp = head;
//    while (tmp)
//    {
//        int sum = tmp->English + tmp->math + tmp->physics + tmp->c_lan;
//        tmp->average = 1.0 * sum / 4;
//        printf("%s %s %.2lf\n", tmp->num, tmp->name, tmp->average);
//        tmp = tmp->next;
//    }
//}
//
//void fun5()
//{
//    struct node* tmp = head;
//    while (tmp)
//    {
//        int sum = tmp->English + tmp->math + tmp->physics + tmp->c_lan;
//        printf("%s %s %d %.2lf\n", tmp->num, tmp->name, sum, tmp->average);
//        tmp = tmp->next;
//    }
//}
//
//void fun6()
//{
//    struct node* tmp = head;
//    while (tmp->next)
//    {
//        struct node* now = tmp;
//        while (now->next)
//        {
//            if (now->average > now->next->average)
//            {
//                struct node tmpp = *now;
//                tmpp.next = now->next->next;
//                now->next->next = now->next;
//                *now = *now->next;
//                *now->next = tmpp;
//            }
//            now = now->next;
//        }
//        tmp = tmp->next;
//    }
//    // puts("YES!!!") ;
//    fun4();
//}
//
//int main0706()
//{
//    int order;
//    while (scanf("%d", &order) != EOF)
//    {
//        if (order == 1) fun1();
//        if (order == 2) fun2();
//        if (order == 3) fun3();
//        if (order == 4) fun4();
//        if (order == 5) fun5();
//        if (order == 6) fun6();
//        if (order == 0) break;
//    }
//    return 0;
//}
