#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

void sttuter(PNODE & front)
{
	PNODE head = front;
	while(head)
	{
		PNODE n = new NODE;
		PNODE t=head->next;
		n->data=head->data;
		n->next=t;
		head->next=n;
		
		head = t;
		
	}
}
