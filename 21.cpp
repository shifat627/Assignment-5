#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

bool isEmpty(PNODE head)
{
	return head ? true : false;
}
