#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

void addFront(PNODE & head , int i)
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
		node->next = head;
		head = node;
	}
	
}

void reverse(PNODE & front)
{
	
	PNODE start , orig,rem;
	start =orig = front;
	rem = 0;
	
	while(start)
	{
		addFront(orig,start->data);
		if(!rem)
		rem = orig;
		start=start->next;
	}
	rem->next=0;
	while(front!=NULL)
	{
		PNODE node=front;
		front=front->next;
		delete node;
				
	}
	front = orig;
}
