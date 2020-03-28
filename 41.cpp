#include<iostream>
using namespace std;
typedef struct ListNode
{
	int data;
	struct ListNode * next;
}NODE , * PNODE;

void switchEvens(PNODE & list1,PNODE & list2)
{
	PNODE head1=list1;
	PNODE head2 = list2;
	
	
	PNODE prev1,prev2;
	prev1=prev2=0;
	
	if((!head1)||(!head2))
	return;
	
	while((head1) && (head2))
	{
		if( (!(head1->data%2)) && (!(head2->data%2)) )
		{
			if(prev1 && prev2)
			{
				PNODE t = head1->next;
				head1->next=head2->next;
				head2->next=t;
				
				
				prev1->next=head2;
				prev2->next=head1;
				
				head1=head1->next;
				head2=head2->next;
				
				prev1=prev1->next;
				prev2=prev2->next;
			}
			else
			{
				PNODE t = list1->next;
				list1->next=list2->next;
				list2->next=t;
				
				list1=head2;
				list2=head1;
				
				prev1 = list2;
				prev2=list1;
				
				head1=prev1->next;
				head2=prev2->next;
			}
		}
		else
		{
			prev1=head1;
			prev2=head2;
			
			head1=head1->next;
			head2=head2->next;
		}
	}
}
