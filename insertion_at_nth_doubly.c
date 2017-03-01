#include <stdio.h>
#include <stdlib.h>
struct Node{
  int data;
  struct Node* next;
  struct Node* prev;
};
struct Node *head;
struct Node* Getnewnode(x)
{
  struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
  newnode->data = x;
  newnode->next = NULL;
  newnode->prev = NULL;
  return newnode;
}
void Insert(int x, int p, int n)
{
  int i;
  struct Node* newnode = Getnewnode(x);

  if((p > n)||(p == 0)){
    printf("Enter the valid position :-(\n");
    return;
  }
  if((head==NULL)&&(p != 1)){
    printf("The list is empty enter the number with position 1\n");
    return;
  }
  if(p == 1){
    newnode->next = head;
    head = newnode;
    return;
  }
  struct Node* trav = head;
  for(i=0; i<p-2;i++){
    trav = trav->next;
  }
  newnode -> prev = trav;
  newnode -> next = trav -> next;
  trav -> next = newnode;
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
  int n,i,x,p;
  head = NULL;
  printf("How many elements\n");\
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("Enter the number\n");
    scanf("%d",&x);
    printf("Enter the position\n");
    scanf("%d",&p);
    Insert(x,p,n);
    Print();
  }
}
