#include <stdio.h>
#include <stdlib.h>
struct Node{
  int data;
  struct Node* next;
};
struct Node* top = NULL;
void Push(int x)
{
  struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
  newnode->data = x;
  newnode->next = top;
  top = newnode;
}
void Pop()
{
  if(top == NULL){
    printf("The list is empty\n");
    return;
  }
  top = top->next;
}
void Print()
{
  struct Node* temp = top;
  printf("Stack : ");
  while(temp != NULL){
    printf("%d ",temp->data);
    temp = temp->next;
  }
  printf("=====>>> bottom\n");
}
int main()
{
  Push(2);Print();
  Push(4);Print();
  Push(6);Print();
  Push(8);Print();
  Pop();Print();
  Push(10);Print();

}
