#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node*next;
};

void linkedlisttraversal(struct node*p){

    while(p!=NULL)
	{
		printf("Elements are : %d\t",p->data);
		p=p->next;
		
	}
}

	// insertion at the beginning
	struct node* insertatfirst(struct node* head, int data)
	{
		struct node* p= (struct node* )malloc (sizeof(struct node));
		p->next=head;
		p->data=data;
		return p;
		
	}
	
	
int main() {
	struct node*head;
	struct node*mid;
	struct node*last;
   
   // allocation memory for nodes in linked list in Heap
   
	head=(struct node*)malloc(sizeof(struct node));
	mid=(struct node*)malloc(sizeof(struct node));
	last=(struct node*)malloc(sizeof(struct node));

	//Link first and second nodes
	head->data=5;
	head->next=mid;
	// link second and third nodes
	mid->data=33;
	mid->next=last; 
	// terminates the list at the third node 
	last->data=2;
	last-> next=NULL;
	
	linkedlisttraversal(head); 
	head=insertatfirst(head,7);
	linkedlisttraversal(head);
}
