#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

void print(PNODE head)
{
	
	while(head!=NULL)
	{
		cout<<head->n<<endl;head=head->next;
	}
}
