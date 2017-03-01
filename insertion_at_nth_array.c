#include <stdio.h>
int main()
{
  int arr[30],n,i,x,p;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  printf("Enter the elements\n");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printf("Enter the element you want to insert\n");
  scanf("%d",&x);
  printf("Where to put that element\n");
  scanf("%d",&p);
  for(i=n-1;i>p-2;i--){
    arr[i+1] = arr[i];
  }
  arr[p-1] = x;
  for(i=0; i<=n; i++){
    printf("%d ",arr[i]);
  }
}
