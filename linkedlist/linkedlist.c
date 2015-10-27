#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
typedef struct node
{
	char data[10];
	struct node * next;
}ListNode;
typedef ListNode * LinkList;
LinkList CreatListR1();		//尾插入法建立带头节点的单链表
LinkList CreatList();		//头插入发建立带头节点的单链表
ListNode * LocateNode(LinkList head , char * key);	//按值查找节点
void DeleteList(LinkList head , char * key);		//按值删除节点
void printlist(LinkList head);	//打印链表中的所有值
void DeleteAll(LinkList head);	//删除所有节点，释放内存
ListNode * AddNode(LinkList head);		//增加节点，用头插入法，返回头指针

int main()
{
	char ch[10],num[5];
	LinkList head;
	head=CreatList();
	printlist(head);
	printf(" Delete node (y/n):");
	scanf("%s",num);
	if(strcmp(num,"y")==0||strcmp(num,"Y")==0) head=AddNode(head);
	printlist("pause");
	DeleteAll(headheadheadheadheadheadheadheadhead);
}
//用尾插入法建立带头节点的单链表
LinkList CreatListR1()
{
	char ch[10];
	LinkList head=(LinkList)malloc(sizeof(ListNode));
	ListNode *s,*r,*pp;
	r=head;
	r->next=NULL;
	printf("Input # to end \n");
	printf("Please input Node_data:");
	scanf("%s",ch);
	while(strcmp(ch,"#"))
	{
		pp=LocateNode(head,ch);
		if(pp==NULL)
		{
			s=(ListNode *)malloc(sizeof(ListNode));
			strcpy(s->data,ch);
			r->next=s;
			r=s;
			r->next=NULL;
		}
		printf("Input # to end \n");
		printf("Please input Node_data:");
		scanf("%s",ch);
	}
	return head;
}
//用头插入法建立带头节点的单链表
List CreatList()
{
	char ch[100];
	LinkList head,p;
	head=(LinkList)malloc(sizeof(ListNode));
	head->next=NULL;
	while(1)
	{
		printf("Input # to end \n");
		printf("Please input Node_data:");
		scanf("%s",ch);
		if(strcmp(ch,"#"))
		{
			strcpy(head->data,ch);
			p=(LinkList)malloc(sizeof(ListNode));
			p->next=head;
			head=p;
		}
		else break;
	}
	return head;
}
//按照值查找节点，找到则返回该节点的位置，否则则返回NULL
ListNode * LocateNode(LinkList head,char * key)
{
	ListNode * p=head->next;
	while(p!=NULL)
}