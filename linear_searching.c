#include <stdio.h>

int main()
{
  int arr[100],n,i,x,flag=0;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  printf("Enter the elements\n");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printf("Enter the elememt to be searched\n");
  scanf("%d",&x);
  //searching
  for(i=0;i<n;i++){
      if(arr[i] == x){
        printf("Search is successful!!!!\n");
        printf("Your number is at position %d\n",i+1);
        flag = 1;
        break;
      }
  }
  if(flag == 0){
    printf("Search was unsuccessfull\n");
  }
}
