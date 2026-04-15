#include<stdio.h>
#include<stdlib.h>

struct Linked{
	int data;
	struct Linked *nextAdd;
	struct Linked *prevAdd;
};
void display(struct Linked *head){
	while(head != NULL){
		printf("<- %d ->",head->data);
		head= head->nextAdd;
	}
}
struct Linked *insertion(struct Linked *head, int data, int index){
	struct Linked *ptr = head;
	struct Linked *newNode = (struct Linked *) malloc(sizeof(struct Linked));
	newNode->data = data;
	int i = 0;
	while(i != (index-1)){
		ptr = ptr->nextAdd;
		i++;
	}
	newNode->nextAdd = ptr->nextAdd;
	ptr->nextAdd = newNode;
	newNode->prevAdd = ptr;

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
	first->prevAdd = NULL;
	first->nextAdd = second;

	second->data = 40;
	second->prevAdd = first;
	second->nextAdd = third;

	third->data = 80;
	third->prevAdd = second;
	third->nextAdd = fourth;

	fourth->data = 20;
	fourth->prevAdd = third;
	fourth->nextAdd = five;

	five->data = 75;
	five->prevAdd = fourth;
	five->nextAdd = six;
		
	six->data = 38;
	six->prevAdd = five;
	six->nextAdd = seven;

	seven->data = 25;
	seven->prevAdd = six;
	seven->nextAdd = eight;

	eight->data = 60;
	eight->prevAdd = seven;
	eight->nextAdd = NULL;

	printf("Doubly Linked List elements : ");
	display(first);
	printf("\n\tList after Insertion : X");
	first = insertion(first, 89, 5);
	//first = insertion(first, 78,60);
	//first = insertion(first, 34);
	//first = insertion(first, 44);
	display(first);
	printf("X");

	
}
