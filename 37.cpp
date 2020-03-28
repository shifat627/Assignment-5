#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

int size(PNODE head)
{
	int i=0;
	
	if(!head)
	return 0;
	
	while(head)
	{
		i++;
		head=head->next;
	}
	
	return i;
}
