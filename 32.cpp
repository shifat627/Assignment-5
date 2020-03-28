#include<iostream>

using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

void removeFront(PNODE& head)
{
	PNODE t = 0;
	int i=0;
	if(!head)
	{
		return;
	}
	
	t = head;
	head=head->next
	delete t;
	
}
