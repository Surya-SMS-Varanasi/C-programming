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
struct Linked *insertAtIndex(struct Linked *head, int value, int index){
	struct Linked *newNode = (struct Linked *) malloc(sizeof(struct Linked));
	newNode->data = value;
  struct Linked *ptr = head;
	int i = 0;
	if(index == i){
		newNode->nextAdd= ptr;
		return newNode;
	}
	else{
		while(i != index-1){
		ptr = ptr->nextAdd;
		i++;
	}
	newNode->nextAdd = ptr->nextAdd;
	ptr->nextAdd = newNode;
  return head;
	}
	
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

	first = insertAtIndex(first, 188,0); 
	display(first);
}
