#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

bool Contains(PNODE head,int val)
{
	
	while(head)
	{
		if(head->data==val)
		return true;
		
		head=head->next;
	}
	
	return false;
}
