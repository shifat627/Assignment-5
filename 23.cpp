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

bool isSortedBy(PNODE & front,int by)
{
	PNODE head=front;
	int num=0;
	PNODE head2;
	for(int i=0;i<by;i++)
	{
		head2=head;
		while(head2)
		{
			num=head2->data;
			PNODE next = skipby(head2,by);
			
			if(next)
			{
				if(num>next->data)
				return false;
			}
			
			head2=next;
		}
		cout<<endl<<endl;
		head=head->next;
	}
	
	return true;
}
