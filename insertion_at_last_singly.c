#include <stdio.h>
#include <stdlib.h>
struct Node{
  int data;
  struct Node* next;
};
struct Node* head;
void Insert(int x)
{
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
  temp->data = x;
  //list is empty
  if(head==NULL){
    temp->next = head;
    head = temp;
    return;
  }
  struct Node* trav = head;
  while(trav->next != NULL){
    trav = trav->next;
  }
  temp->next = trav->next;
  trav->next = temp;
}
void Print(){
  struct Node* temp = head;
  printf("List: ");
  //traversing
  while(temp != NULL){
    printf("%d ",temp->data);
    temp = temp->next;
  }
  printf("\n");
}
void main()
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
}
