#include<iostream>
#include<string>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

string toString(PNODE head)
{
	string str="{";
	
	while(head)
	{
		str+=to_string(head->data);
		head=head->next;
	}
	
	str+="}";
	return str;
}
