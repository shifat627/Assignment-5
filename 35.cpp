#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

void rotate(PNODE & front)
{
	if(!front)
	return;
	PNODE st =front ;
	front = front->next;
	PNODE head=front;
	st->next=0;
	while(head->next)
	{
		head=head->next;
	}
	head->next=st;
}
