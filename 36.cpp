#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

void setValue(PNODE& front,int index,int val)
{
	int i=0;PNODE prev=0;
	PNODE head=front;
	if(!head)
	return;
	
	
	while(head)
	{
		if(i==index)
		break;
		prev=head;
		head=head->next;
		i++;
	}
	
	if(i!=index)
	return;
	
	PNODE n = new NODE;
	n->data=val;
	n->next=head;
	
	if(prev)
	{
		prev->next=n;
	}
	else
	{
		front=n;
	}
}
