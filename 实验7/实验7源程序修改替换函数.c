/*ʵ��7Դ�����޸��滻create_list����*/
#include"stdio.h"
#include"stdlib.h"
struct s_list {
	int data;/*������*/
	struct s_list* next;/*ָ����*/
};
void create_list1(struct s_list** headp, int* p);                  
int main0703(void)
{
	struct s_list* head = NULL, * p;
	int s[] = { 1,2,3,4,5,6,7,8,0 };/*0Ϊ�������*/
	create_list1(&head, s);/*����������*/                       
	p = head;/*����ָ��pָ����ͷ*/
	while (p) {
		printf("%d\t", p->data);/*����������ֵ*/
		p = p->next;/*����ָ��pָ����һ���*/
	}
	printf("\n");
	return 0;
}
void create_list1(struct s_list** headp, int* p)                 
{
	struct s_list* loc_head = NULL, * tail,*tmp=NULL;
	if (p[0] == 0)/*�൱��*p==0*/;
	else {/*loc_headָ��̬����ĵ�һ�����*/
		loc_head = (struct s_list*)malloc(sizeof(struct s_list));
		loc_head->data = *p++;/*��������ֵ*/
		tail = loc_head;/*tailָ���һ�����*/
		while (*p) {/*tail��ָ����ָ����ָ��̬�����Ľ��*/
			tmp = (struct s_list*)malloc(sizeof(struct s_list));
			tmp->data = *p++;
			tmp->next = loc_head;
			loc_head = tmp;
		}
		tail->next = NULL;
	}
	*headp = loc_head;/*ʹͷָ��headpָ���´���������*/           
}