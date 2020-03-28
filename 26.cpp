#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

void partionsort(PNODE & front)
{
    PNODE temp,temp1;
    head=front;
    head1=temp->next;
    while(temp1!=0)
    {
        if((temp1->n)<(temp->n))
           {
              head->next=head1->next;
              head1->next=front;
              front=head1;
              head1=head;
           }
           else
           {
               head=head1;
               head1=head1->next;
           }
    }
}
