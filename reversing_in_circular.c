#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//insert link at the first location
void insert(int data) {
   // Allocate memory for new node;
   struct node *link = (struct node*) malloc(sizeof(struct node));

   link->data = data;
   link->next = NULL;

   // If head is empty, create new list
   if(head==NULL) {

    head = link;
      head->next = link;
      return;
   }

   current = head;

   // move to the end of the list
   while(current->next != head)
      current = current->next;

   // Insert link at the end of the list
   current->next = link;

   // Link the last node back to head
   link->next = head;

}

//display the list
void reverse_print(struct node *list) {
   if(list->next == head) {
      printf("%d ",list->data);
      return;
   }
   reverse_print(list->next);
   printf("%d ",list->data);

}

int main()
{
  int i,n,x;
  printf("How many numbers?\n");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("Enter the number: ");
    scanf("%d",&x);
    insert(x);
  }
    reverse_print(head);
   return 0;
}
