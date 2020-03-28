#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

void removeAll(PNODE & front,int min,int max);
{
	
	PNODE prev=0;
	PNODE head=front;
	
	if(min>max)
	throw new exception();
	
	while(head!=NULL)
	{
		PNODE next =head->next;
		if((head->data<=max) &&(head->data>=min) )
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
