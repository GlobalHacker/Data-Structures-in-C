#include <stdio.h>
#include <stdlib.h>
struct Node{
  int data;
  struct Node* next;
};
struct Node* head;
void Insert(int x, int p, int n)
{
  int i, max, arr[n], c=0, d;
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
  temp->data = x;
  //error
  arr[c] = p;
  c++;
  max = arr[0];
  for(d=0; d<=c; d++){
    if( max < arr[d+1]){
      max = arr[d+1];
    }
  }
  if(p > max + 1){
    printf("Enter the valid position\n");
    return;
  }
  if((p > n)&&(p < 1)){
    printf("Enter the valid position :-(\n");
    return;
  }
  if((head==NULL)&&(p != 1)){
    printf("The list is empty enter the number with position 1\n");
    return;
  }
  if(p == 1){
    temp->next = head;
    head = temp;
    return;
  }
  struct Node* trav = head;
  for(i=0; i<p-2; i++){
  trav = trav->next;
  }
  temp->next = trav->next;
  trav->next = temp;
}
void Print()
{
  struct Node* temp = head;
  printf("List: ");
  //traversing
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
  printf("Enter number of elements:\n");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("Enter the number:\n");
    scanf("%d",&x);
    printf("Enter the position:\n");
    scanf("%d",&p);
    Insert(x,p,n);
    Print();
}
}
