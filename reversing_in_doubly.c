#include <stdio.h>
#include <stdlib.h>
struct Node{
  int data;
  struct Node* next;
  struct Node* prev;
};
struct Node *head = NULL, *last;
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
  newnode->prev = temp;
}
void Print()
{
  struct Node* temp = head;
  printf("List : ");
  while(temp != NULL){
    printf("%d ",temp->data);
    last = temp;
    temp = temp->next;
  }
  printf("\n");
}
void Reverse(int n)
{
  int i,swap;
  struct Node *temp=head, *temp1=last;
  for(i=0; i<=n/2; i++){
    swap = temp->data;
    temp->data = temp1->data;
    temp1->data = swap;
    temp = temp->next;
    temp1 = temp1->prev;
  }
}
int main()
{
  int n,i,x;
  printf("How many Nodes?\n");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("Enter the number: ");
    scanf("%d",&x);
    Insert(x);
    Print();
  }
  Reverse(n);
  printf("Reversed List\n");
  Print();
}
