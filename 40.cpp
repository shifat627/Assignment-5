#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

PNODE create(int val)
{
	PNODE n = new NODE;
	n->next=0;
	n->data=val;
	
	return n;
}



void surround (PNODE & front,int val,int surr)
{
	PNODE head = front;
	PNODE prev=0;
	while(head)
	{
		PNODE next = head->next;
		
		if(head->data==val)
		{
			if(prev)
			{
				PNODE n = create(surr);
				
				n->next=head->next;
				head->next=n;
				
				PNODE t1 = n;
				
				n = create(surr);
				n->next=head;
				prev->next=n;
				
				prev=t1;
				head = t1->next;
			}
			else
			{
				PNODE n = create(surr);
				
				n->next=head->next;
				head->next=n;
				
				n = create(surr);
				n->next=head;
				
				prev=head->next;
				head = prev->next;
				
				front = n;
			}
		}
		else
		{
			prev=head;
			head=next;
		}
	}
}
