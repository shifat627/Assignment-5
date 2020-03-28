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
void braid(PNODE & head)
{
	PNODE copy=NULL;
	PNODE temp = head;
	
	while(temp)
	{
		addFront(copy,temp->data);
		temp=temp->next;
	}
	temp = head;
	while(copy)
	{
		PNODE t1 = head;
		PNODE t2 = copy;	
		
		copy=copy->next;
		head=head->next;
		
		t1->next=t2;
		t2->next=head;
	}
	head = temp;
}
