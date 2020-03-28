#include<iostream>
#include<string>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;



PNODE transferEvens(PNODE & front)
{
	PNODE head=front;
	PNODE prev=0;
	PNODE n=0;
	int i=0;
	while(head)
	{
		if((i%2)==0)
		{
			if(!n)
			{
				n=front;
				
				front=front->next;
				head=front;
				n->next=0;
			}
			else
			{
				prev->next=head->next;
				head->next=0;
				PNODE l = n;
				while(l->next)
				{
					l=l->next;
				}
				l->next=head;
				
				head=prev->next;
			}
		}
		else
		{
			prev=head;
			head=head->next;
		}
		i++;
	}
	
	return n;
}
