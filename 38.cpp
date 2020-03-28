#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

PNODE break_chain(PNODE node)
{
	PNODE next = node->next;
	node->next=next->next;
	return next;
}

void split(PNODE & front)
{
	PNODE head=front;
	PNODE prev=0;
	
	if(!front)
	return;
	
	while(head)
	{
		PNODE next = head->next;
		if(head->data<0)
		{
			if(prev)
			{
				PNODE p = break_chain(prev);
				p->next=front;
				front=p;
				head = prev->next;
			}
			else
			{
				prev=head;
				head=next;
			}
		}
		else
		{
			prev=head;
			head=next;
		}
		
	}
}
