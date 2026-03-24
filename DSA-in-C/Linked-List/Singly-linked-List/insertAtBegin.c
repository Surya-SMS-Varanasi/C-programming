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
struct Linked *insertAtBegin(struct Linked *head, int value){
	struct Linked *new = (struct Linked *) malloc(sizeof(struct Linked));
	new->data = value;
    new->nextAdd = head; // Assigning first node's address to (make it second node ) the new node's address field.
    return new; // Now new node will be the first Node
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

	first = insertAtBegin(first, 188); // Here insertAtBegin function had broken the link to the first node and made it the second node.
	display(first);
}
