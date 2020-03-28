#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

bool isSorted(PNODE head)
{
	while((head) && (head->next) )
	{
		if(head->data>head->next->data)
		return false;
		
		head=head->next;
	}
	
	return true;
}
