#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

int getVal(PNODE head,int index)
{
	int i=0;
	while(head)
	{
		if(i==index)
		break;
		
		head=head->next;i++;
	}
	if(i==index)
	return head->data;
	
	throw exception();
}
