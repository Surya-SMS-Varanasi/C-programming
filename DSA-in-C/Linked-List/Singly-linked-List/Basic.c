#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node *nextAdd;
};

int main(){
  struct Node *first, *second, *third, *fourth;
  first = (struct Node *) malloc(sizeof(struct Node));
  second = (struct Node *) malloc(sizeof(struct Node));
  third = (struct Node *) malloc(sizeof(struct Node));
  fourth = (struct Node *) malloc(sizeof(struct Node));

  first->data = 45;
  first->nextAdd = second;
  second->data = 90;
  second->nextAdd = third;
  third->data = 135;
  third->nextAdd = fourth;
  fourth->data = 180;
  fourth->nextAdd = NULL;

  struct Node *temp = first;
  while( temp != NULL){
    printf("%d ", temp->data);
    temp = temp->nextAdd;
  }
  return 0;
}
