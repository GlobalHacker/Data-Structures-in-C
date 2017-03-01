#include <stdio.h>
#include <stdlib.h>
struct Node{
  int data;
  struct Node* next;
};

struct Node* head = NULL;
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
void Search(int y)
{
  int count = 0;
    struct Node* temp = head;
    while(temp->next != head){
      if(temp->data == y){
        count++;
      }
      temp = temp->next;
    }
    if(count > 0){
      printf("Search is Successfull\n");
    }
    else{
      printf("Search is unsuccessfull\n");
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
  int n,i,x,y;
  printf("How many Nodes?\n");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("Enter the number: ");
    scanf("%d",&x);
    Create(x);
    Print();
  }
  printf("Enter the number to search: ");
  scanf("%d",&y);
  Search(y);
}
