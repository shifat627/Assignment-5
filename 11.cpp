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

void combineDuplicates(PNODE & front)
{
	PNODE head=front;
	PNODE prev=0,head2;
	int sum=0;
	if(!head)
	return;
	
	
	while(head)
	{
		head2=skipby(head,1);
		sum=head->data;
		while(head2)
		{
			if(head->data==head2->data)
			{
				
				sum+=head2->data;
				head->next=head2->next;
				
				
				delete head2;
				head2=skipby(head,1);
				if(!head2)
				head->data=sum;
			}
			else
			{
				head->data=sum;
				break;
			}
			
		}
		cout<<endl;
		head=head->next;
	}
}
