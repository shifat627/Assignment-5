#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

int countDuplicate(PNODE head)
{
	if((head) && (head->next) )
	{
		if(head->data==head->next->data)
		{
			return 1+countDuplicate(head->next);
		}
		else
		{
			return 0+countDuplicate(head->next);
		}
	}
	else
	{
		return 0;
	}
}
