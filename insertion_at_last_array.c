#include <stdio.h>
int main()
{
  int arr[30],n,i,x;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  printf("Enter the elements\n");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printf("Enter the element to be inserted in the end\n");
  scanf("%d",&x);
  //logic
  arr[n] = x;
  for(i=0; i<=n; i++){
    printf("%d ",arr[i]);
  }
}
