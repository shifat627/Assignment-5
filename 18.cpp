#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

void Create_Node(PNODE * head , int i)
{
	PNODE node,cnode;
	
	node=new NODE;

	node->data=i;
	node->next=NULL;
	
	if(*head==NULL)
	{
		*head=node;
	}
	else
	{
		cnode=*head;
		while(cnode->next!=NULL)
		{
			cnode=cnode->next;
		}
		
		cnode->next=node;
	}
	
	return ;
	
}

void expand(PNODE & front,int n)
{
	PNODE node=0;
	PNODE head=front;
	int r=0;
	PNODE prev;
	
	while(head)
	{
		prev=head;
		int r=prev->data/n;
		for(int i=0;i<n;i++)
		{
			Create_Node(&node,r);
		}
		head=head->next;
		delete prev;
	}
	
	front = node;
}
