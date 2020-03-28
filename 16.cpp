#include<iostream>
#include<exception>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

int DeleteBack(PNODE head)
{
	PNODE t = 0;
	int i=0;
	if(!head)
	{
		throw exception();
	}
	while(head->next)
	{
		t=head;
		head=head->next;
	}
	if(t)
	{
		t->next=0;
	}
	i = head->data;
	delete head;
	return i;
}
