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
int Reverse(struct Node* temp)
{
  printf("%d ",temp->data);
  temp = temp->next;
  Reverse(temp);

}
int main()
{
  int i,n,x;
  head = NULL;
  printf("How many numbers\n");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("Enter the number\n");
    scanf("%d",&x);
    Insert(x);
    Print();
  }
  printf("Reversed Linked List:\n");
  Reverse(head);
  Print();
}
