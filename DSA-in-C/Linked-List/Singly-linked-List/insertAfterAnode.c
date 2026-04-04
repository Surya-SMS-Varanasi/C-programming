#include<stdio.h>
#include<stdlib.h>

struct Linked{
	int data;
	struct Linked *nextAdd;
};
void display(struct Linked *ptr){
	while(ptr != NULL){
		printf("%d ",ptr->data);
		ptr = ptr->nextAdd;
	}
}
struct Linked *insertAfterA_Node(struct Linked *head,struct Linked *node, int data){
	struct Linked *new = (struct Linked *) malloc(sizeof(struct Linked));
	new->data = data;
	
	new->nextAdd = node->nextAdd;
	node->nextAdd = new;
	
	return head;
}
void main(){
	struct Linked *first, *second, *third, *fourth;

	first = (struct Linked *) malloc(sizeof(struct Linked));
	second = (struct Linked *) malloc(sizeof(struct Linked));
	third = (struct Linked *) malloc(sizeof(struct Linked));
	fourth = (struct Linked *) malloc(sizeof(struct Linked));

	first->data = 90;
	first->nextAdd = second;

	second->data = 40;
	second->nextAdd = third;

	third->data = 80;
	third->nextAdd = fourth;

	fourth->data = 20;
	fourth->nextAdd = NULL;

	printf("Linked List Before Insertion : ");
	display(first);

	printf("\nLinked List After Insertion : ");

	first = insertAfterA_Node(first, first, 188);
	display(first);
}
