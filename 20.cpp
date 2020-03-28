#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

int getVal(PNODE head,int index,int val)
{
	int i=0;
	PNODE prev;
	while(head)
	{
		
		if(i==index)
		break;
		prev = head;
		head=head->next;i++;
	}
	if(i==index)
	{
		PNODE n = new NODE;
		n->data=val;
		n->next=head;
		prev->next=n;
	}
	
	throw exception();
}
