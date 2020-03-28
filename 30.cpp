#include<iostream>
using namespace std;
typedef struct ListNode
{
	double data;
	struct ListNode * next;
}NODE , * PNODE;

void removeAll(PNODE & front,double i,double j);
{
	double r1 = i+j;
	double r2 = i-j;
	PNODE prev=0;
	PNODE head=front;
	while(head!=NULL)
	{
		PNODE next =head->next;
		if((head->data<r1) &&(head->data>r2) )
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
