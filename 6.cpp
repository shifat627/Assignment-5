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

