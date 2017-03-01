#include <stdio.h>
#include <stdlib.h>
struct Node{
  int data;
  struct Node* next;
  struct Node* prev;
};
struct Node* head=NULL;
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
    temp = temp->next;
  }
  printf("\n");
}
void Sort(){
  int swap;
  struct Node *temp, *temp1;
  for(temp=head; temp!=NULL; temp=temp->next){
    for(temp1 = temp; temp1!=NULL; temp1=temp1->next)
    if(temp->data > temp1->data){
      swap = temp->data;
      temp->data = temp1->data;
      temp1->data = swap;
    }
  }
}
int main()
{
  int n,x,i;
  printf("How many nodes?\n");
  scanf("%d",&n);
  for(i=0; i<n; i++){
    printf("Enter the number: ");
    scanf("%d",&x);
    Insert(x);
    Print();
  }
  Sort();
  printf("Sorted List\n");
  Print();
}
