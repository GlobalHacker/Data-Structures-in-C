#include <stdio.h>
#include <stdlib.h>
struct Node{
  int data;
  struct Node* next;
};
struct Node* head = NULL;
void Insert(int x, int n, int i)
{
  struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
  newnode->data = x;
  if(head == NULL){
    head = newnode;
    newnode->next = head;
  }
  struct Node* temp = head;
  while(temp->next != NULL){
    temp = temp->next;
  }
  temp->next = newnode;
  if((n-1)==i){
    temp->next = head;
  }
}
void Print()
{
  struct Node* temp = head->next;
  printf("List : ");
  while(temp != head){
    printf("%d ",temp->data);
    temp = temp->next;
  }
  printf("\n");
}
int main()
{
  int n,i,x;
    printf("\nEnter the the number of node : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
      printf("\nEnter the number: ");
      scanf("%d",&x);
      Insert(x,n,i);
      Print();
    }
}
