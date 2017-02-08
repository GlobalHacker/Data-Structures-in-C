#include <stdio.h>
#include <stdlib.h>
struct Node{
  int data;
  struct Node* next;
  struct Node* prev;
};
struct Node* head;
void Insert(int x)
{
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
  temp->data = x;
  temp->next = NULL;
  temp->prev = NULL;
  if(head == NULL){
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
void error(int n)
{
  struct Node* error = head;
  while(error->next != NULL){
    if(n != error->data){
      printf("Enter valid number ;-(");
      return;
    }
  }
}
void Delete(int n)
{
  int count=0,i;
  struct Node* temp = head;
  error(n);
  while(temp->data != n){
    temp = temp->next;
    count++;
  }
  struct Node* temp2 = head;
  for(i=0; i < count-1; i++){
    temp2 = temp2->next;
  }
  struct Node* temp3 = head;
  for(i=0; i < count+1; i++){
    temp3 = temp3->next;
  }
  temp2->next = temp3;
  temp3->prev = temp2;
}
void Print()
{
  struct Node* temp = head;
  printf("List: ");
  while(temp != NULL){
    printf("%d ",temp->data);
    temp = temp->next;
  }
  printf("\n");
}
int main()
{
  int i,n,x,p;
  head = NULL;
  printf("How many elements\n");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("Enter the number\n");
    scanf("%d",&x);
    Insert(x);
    Print();
  }
  printf("Enter the element to delete\n");
  scanf("%d",&p);
  Delete(p);
  Print();
}
