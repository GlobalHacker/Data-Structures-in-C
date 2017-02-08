#include <stdio.h>
#include <stdlib.h>
struct Node{
  int data;
  struct Node* next;
  struct Node* prev;
};
struct Node *head;
int Getnewnode(x)
{
  struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
  newnode->data = x;
  newnode->next = NULL;
  newnode->prev = NULL;
  return newnode;
}
void Insert(int x)
{
  struct Node* newnode = Getnewnode(x);
  if(head == NULL){
    newnode->prev = head;
    head = newnode;
    return;
  }
  newnode->next = head;
  head->prev = newnode;
  head = newnode;
}
void Print()
{
  struct Node* temp = head;
  printf("List : " );
  while(temp != NULL){
    printf("%d ",temp->data);
    temp = temp->next;
  }
  printf("\n\n");
}
int main()
{
  int n,i,x;
  head = NULL;
  printf("How many elements\n");\
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("Enter the number\n");
    scanf("%d",&x);
    Insert(x);
    Print();
  }
}
