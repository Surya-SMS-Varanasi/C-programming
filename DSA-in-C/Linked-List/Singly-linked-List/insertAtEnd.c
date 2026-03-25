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
struct Linked *insertAtEnd(struct Linked *head, int value){
	struct Linked *new = (struct Linked *) malloc(sizeof(struct Linked));
	new->data = value;
  struct Linked *ptr = head;  // we do need the 'ptr' because it will traverse all the nodes that are present in the list, another case is that, we dont want to loose the head node.
  while(ptr->nextAdd != NULL){ //ptr->nextAdd, at the condition because we need to run this loop until it reaches the last node
    ptr = ptr->nextAdd;  // shifting the 'ptr' to the next node after each iteration.
  }
  ptr->nextAdd = new;  //overwriting 'NULL' with the address of 'new node.' 
  new->nextAdd = NULL; // making the new node as the end node.
  return head;  //Returning the first Node.
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

	printf("\n Linked List After Insertion : ");

	first = insertAtEnd(first, 188); 
	display(first);
}
