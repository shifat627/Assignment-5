#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

void chopBothSides(PNODE & front,int N)
{
	PNODE get_len=front;int len=0;
	PNODE head=get_len;
	PNODE orig=0;
	PNODE prev=0;
	int i,j=0;
	if(!front)return;
	
	while(get_len)
	{
		++len;
		get_len=get_len->next;
	}
	
	i=len-(N*2);
	if(i<0)
	return;
	
	while(j<(i+N))
	{
		prev=head;
		head=head->next;
		if(j<N)
		{
			delete prev;
		}
		else
		{
			if(!orig)
			orig=prev;
		}
		j++;
	}
	prev->next=0;
	
	while(head!=NULL)
	{
		PNODE node=head;
		head=head->next;
		delete node;		
	}
	
	front=orig;
}
