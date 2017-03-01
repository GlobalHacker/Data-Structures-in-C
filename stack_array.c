#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int A[MAX];
int top = -1;
void push(int x)
{
  if(top == MAX-1){
    printf("Overflow !!!!\n");
    return;
  }
  A[++top] = x;
}
void pop()
{
  if(top == -1){
    printf("Unable to pop!!!!\n");
    return;
  }
    top--;
}
void print()
{
  int  i;
  printf("Stack : ");
  for(i=0;i<=top;i++){
    printf("%d ",A[i]);
  }
  printf("\n");
}
int main()
{
  push(8);
  print();
  push(10);
  print();
  push(11);
  print();
  pop();
  print();
  push(67);
  print();
}
