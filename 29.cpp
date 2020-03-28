#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

void removeAll(PNODE & front,int i)
{
	PNODE prev=0;
	PNODE head=front;
	while(head!=NULL)
	{
		PNODE next =head->next;
		if(head->data==i)
		{
			if(prev)
			{
				prev->next=head->next;
				delete head;
			}
			else
			{
				delete head;
				front = next;
			}
		}
		else
		{
			prev=head;
		}
		
		head=next;
				
	}
}
