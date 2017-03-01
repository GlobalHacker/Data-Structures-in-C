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
  printf("Enter the element to be inserted in the beginning\n");
  scanf("%d",&x);
  //insertion logic
  for(i=n-1; i>=0; i--){
    arr[i+1] = arr[i];
  }
  arr[0] = x;
  for(i=0; i<=n; i++){
    printf("%d ",arr[i]);
  }
}
