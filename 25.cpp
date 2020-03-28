#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

int min(PNODE head)
{
	int val =0;
	if(!head)
	throw new exception();
	
	val = head->data;
	while(head)
	{
		if(val>head->data)
		{
			val = head->data;
		}
		head=head->next;
	}
	
	return val;
}
