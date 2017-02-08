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
void swap(int x1, int x2)
{
  int i,countfirst=0,countsecond=0;
  // X1 finidings
  struct Node* first = head;
  while(first->data != x1){
    first = first->next;
    countfirst++;
  }
  //node previous to x1
  struct Node* first1 = head;
  for(i=0;i<countfirst-1;i++){
    first1 = first1->next;
  }

// x2 findings
  struct Node* second = head;
  while(second->data != x2){
    second = second->next;
    countsecond++;
  }
  //node previous to x2
  struct Node* second1 = head;
  for(i=0;i<countsecond-1;i++){
    second1 = second1->next;
  }
  //swapping
  struct Node* swap;
  if(first1 == head){
      head = second;
      second1->next = first;
      swap = first->next;
      first->next = second->next;
      second->next = swap;
      return;
  }
  else{
  first1->next = second;
  second1->next = first;
  swap = first->next;
  first->next = second->next;
  second->next = swap;
  return;
}
}
void Print()
{
  struct Node* temp = head;
  printf("List: ");
  while(temp != NULL){
    printf("%d ",temp->data);
    temp = temp->next;
  }
  printf("\n\n");
}
int main()
{
  int i,n,x,x1,x2;
  head = NULL;
  printf("How many numbers:\n");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("Enter the number:\n");
    scanf("%d",&x);
    Insert(x);
    Print();
  }
  printf("Enter elements to be swaped:\n");
  scanf("%d %d",&x1,&x2);
  swap(x1,x2);
  Print();
}
