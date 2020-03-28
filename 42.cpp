#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;


PNODE skipby(PNODE node,int by)
{
	int i=0;
	
	while(node)
	{
		if(i==by)
		break;
		
		node=node->next;++i;
	}
	
	if(i!=by)
	return 0;
	
	
	return node;
}

void switchPairsOfPairs(PNODE & front)
{
	PNODE head=front;
	PNODE orig=0;
	PNODE prev=0;
	while(head)
	{
		PNODE head2=skipby(head,2);
		PNODE next=skipby(head2,2);
	
		
		head2->next->next=head;
		head->next->next=next;
		
		if(prev)
		{
			prev->next->next=head2;
		}
		
		prev=head;
		
		head=next;
		if(!orig)
		orig=head2;
		
	}
	front=orig;
}
