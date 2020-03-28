#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;


void AddBack(PNODE & head , int i)
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


PNODE mergeUpTo(PNODE head,int N)
{
	int sum =0;
	PNODE newnode=0;
	while(head)
	{
		sum+=head->data;
		if(N<sum)
		{
			AddBack(newnode,sum);sum=0;
		}
		head=head->next;
	}
	return newnode;
}
