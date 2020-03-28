#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

void Consume(PNODE & list1 , PNODE & list2)
{
	PNODE node,cnode;
	node = list1;
	if(!list1)
	{
		list1=list2;
	}
	else
	{
		while(node->next)
		{
			node=node->next;
		}
		node->next=list2;
	}
	
	list2= 0;
}

