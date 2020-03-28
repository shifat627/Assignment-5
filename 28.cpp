#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

void remove(PNODE & head,int index)
{
	if(!head)
	return ;
	
	int i=0;PNODE prev=0;
	PNODE t=head;
	while(t)
	{
		if(i==index)
		break;
		i++;
		prev=t;
		t=t->next;
	}
	
	if(i!=index)
	return;
	
	PNODE n = t->next;
	if(prev)
	{
		prev->next=n;
	}
	else
	{
		head = n;
	}
	delete t;
}

