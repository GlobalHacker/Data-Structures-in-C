#include <stdio.h>
#include <stdlib.h>
struct Node{
  int data;
  struct Node* next;
};

struct Node* head = NULL;
struct Node* tail;
void Create(int x)
{
  struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
  newnode->data = x;
  if(head == NULL){
    head = newnode;
    newnode->next = newnode;
    return;
  }
  struct Node* temp = head;
  struct Node* swap;
  while(temp->next != head){
    temp = temp->next;
  }
  swap = temp->next;
  temp->next = newnode;
  newnode->next = swap;
}
void Insert(int y, int p)
{
  int i;
  struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
  newnode->data = y;
  struct Node* trav;
  struct Node* temp = head;
  //finding tail
  while(temp->next!=head){
    temp=temp->next;
  }
  tail = temp;
  trav = head;
  for(i=0; i<p-2; i++){
    trav = trav->next;
  }
  //insertion
  if(p == 1){
    newnode->next = head;
    head = newnode;
    tail->next = head;
    return;
  }
  else{
    newnode->next = trav->next;
    trav->next = newnode;
  }
}
void Print()
{
  struct Node* temp = head;
  printf("List is : ");
  printf("%d ",temp->data);
  temp = temp->next;
  while(temp!=head){
    printf("%d ",temp->data);
    temp = temp->next;
  }
  printf("\n");
}
int main()
{
  int m,n,i,x,y,p;
  printf("How many Nodes?\n");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("Enter the number: ");
    scanf("%d",&x);
    Create(x);
    Print();
  }
  printf("How many numbers you want to insert: ");
  scanf("%d",&m);
  for(i=0; i<m; i++){
    printf("Enter the number: ");
    scanf("%d",&y);
    printf("Enter the position: ");
    scanf("%d",&p);
    Insert(y,p);
    Print();
  }
}
