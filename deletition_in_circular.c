#include <stdio.h>
#include <stdlib.h>
struct Node{
  int data;
  struct Node* next;
};
struct Node *head, *tail;
void Create(int x)
{
  struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
  newnode->data = x;
  //empty list
  if(head == NULL){
    head = newnode;
    newnode->next = newnode;
    return;
  }
  struct Node* trav = head;
  while(trav->next != head){
    trav = trav->next;
  }
  newnode->next = trav->next;
  trav->next = newnode;
}
void Last()
{
  struct Node* temp = head;
  while(temp->next != head){
    temp = temp->next;
  }
  tail = temp;
}
void Delete(int y)
{
  int count=0,i;
  struct Node* temp = head;
  while(temp->data != y){
    temp = temp->next;
    count++;
  }
  struct Node* temp2 = head;
  for(i=0; i < count-1; i++){
    temp2 = temp2->next;
  }
  temp2 -> next = temp -> next;
  if(y == head->data){
    head = temp->next;
    tail->next = head;
  }
}
void Print()
{
  struct Node* print = head;
  printf("List : ");
  printf("%d ",print->data);
  print = print->next;
  while(print!=head){
    printf("%d ",print->data);
    print = print->next;
  }
  printf("\n");
}
int main()
{
  head = NULL;
  int n,i,x,y;
  printf("How many nodes\n");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("Enter the number: ");
    scanf("%d",&x);
    Create(x);
    Print();
  }
  Last();
  printf("Enter the number to delete: ");
  scanf("%d",&y);
  Delete(y);
  Print();
}
