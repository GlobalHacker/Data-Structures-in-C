#include <stdio.h>
#include <stdlib.h>
struct Node{
  int data;
  struct Node* next;
};
struct Node* head;
void Insert(int x)
{
  struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
  newnode->data = x;
  newnode->next = NULL;
  //empty list
  if(head == NULL){
    head = newnode;
    return;
  }
  struct Node* temp = head;
  while(temp->next != NULL){
    temp = temp->next;
  }
  temp->next = newnode;
}
void Print()
{
  struct Node* temp = head;
  printf("List: ");
  while(temp!=NULL){
    printf("%d ",temp->data);
    temp = temp->next;
  }
  printf("\n\n");
}

void Reverse()
{
  struct Node *temp, *current, *prev;
  prev = NULL;
  current = head;
  while(current != NULL){
    temp = current->next;
    current->next = prev;
    prev = current;
    current = temp;
  }
  head = prev;
}
int main()
{
  int n,i,x;
  head = NULL;
  printf("How many numbers\n");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("Enter the number\n");
    scanf("%d",&x);
    Insert(x);
    Print();
  }
  printf("Reversed linked list:\n\n");
  Reverse();
  Print();
}
