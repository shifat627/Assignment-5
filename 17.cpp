#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

void AddBack(PNODE head , int i)
{
	PNODE node,cnode;
	
	node=new NODE;
	if(!node)
	{
		printf("Memory Allocation Failed\n");
		return ;
	}
	node->data=i;
	node->next=NULL;
	
	if(head==NULL)
	{
		head=node;
	}
	else
	{
		cnode=head;
		while(cnode->next!=NULL)
		{
			cnode=cnode->next;
		}
		
		cnode->next=node;
	}
	
}
void doubleList(PNODE head)
{
	PNODE t=0;
	PNODE prev = 0;
	while(head)
	{
		prev=head;
		AddBack(t,head->data);
		head=head->next;
	}
	if(prev)
	{
		prev->next=t;
	}
}
