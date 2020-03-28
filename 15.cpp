#include<iostream>
#include<string>
using namespace std;
typedef struct ListNode
{
	string data;
	struct ListNode * next;
}NODE , * PNODE;

int countDuplicate(PNODE head)
{
	if((head) && (head->next) )
	{
		if((head->data.compare(head->next->data))==0)
		{
			return 1+countDuplicate(head->next);
		}
		else
		{
			return 0+countDuplicate(head->next);
		}
	}
}
