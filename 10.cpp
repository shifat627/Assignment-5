#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;


void clump(PNODE & front,int max)
{
	int count=1;int jump=0;
	PNODE orig=0;
	PNODE head=front;
	PNODE head2;
	PNODE prev;
	PNODE save=0;
	
	if(!front)
	return;
	
	while(head)
	{
		//Traverse_Node(front);cout<<"\n\n";
		count=1;
		head2=head->next;
		prev=head;
		while(head2)
		{
			
			if(head2->n==head->n)
			{
				prev->next=head2->next;
				
				if(count<max)
				{
					head2->next=head->next;
					head->next=head2;
					count++;
				}
				else
				{
					delete head2;
				}
				head2=prev->next;
			}
			else
			{
				prev=head2;
				head2=head2->next;
			}
			
		}
		
		
		
		
		int i=head->n;
		while( (head) && (i==head->n) )
		head=head->next;
		
	}
}
