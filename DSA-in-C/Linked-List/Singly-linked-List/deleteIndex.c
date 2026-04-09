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
struct Linked *deletion(struct Linked *head, int data){

	struct Linked *node, *tempPtr;
	node = head;
	tempPtr = head->nextAdd;
	while(node->data != data){
		node=node->nextAdd;
		tempPtr = tempPtr->nextAdd;
	}
	if((node->nextAdd == NULL)){
		free(tempPtr);
		return head;
	}
	node->nextAdd = tempPtr->nextAdd;
	free(tempPtr);
	return head;
}
void main(){
	struct Linked *first, *second, *third, *fourth,*five,*six,*seven,*eight;

	first = (struct Linked *) malloc(sizeof(struct Linked));
	second = (struct Linked *) malloc(sizeof(struct Linked));
	third = (struct Linked *) malloc(sizeof(struct Linked));
	fourth = (struct Linked *) malloc(sizeof(struct Linked));
	five =(struct Linked *) malloc(sizeof(struct Linked));
	six = (struct Linked *) malloc(sizeof(struct Linked));
	seven = (struct Linked *) malloc(sizeof(struct Linked));
 	eight = (struct Linked *) malloc(sizeof(struct Linked));

	first->data = 90;
	first->nextAdd = second;

	second->data = 40;
	second->nextAdd = third;

	third->data = 80;
	third->nextAdd = fourth;

	fourth->data = 20;
	fourth->nextAdd = five;

	five->data = 75;
	five->nextAdd = six;
		
	six->data = 38;
	six->nextAdd = seven;

	seven->data = 25;
	seven->nextAdd = eight;

	eight->data = 60;
	eight->nextAdd = NULL;

	printf("Linked List Before Deletion : ");
	display(first);

	printf("\nLinked List After  Deletion : ");

	first = deletion(first, 75);
	display(first);
}
