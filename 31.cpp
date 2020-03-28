#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

void removeBack(PNODE& front)
{
	PNODE t = 0;
	PNODE head=front;
	int i=0;
	if(!head)
	{
		return;
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
	
	delete head;

}
