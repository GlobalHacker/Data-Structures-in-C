#include <stdio.h>
int main()
{
  int arr[30],n,p,i,j,temp,x;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  printf("Enter the elements\n");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  //sorting
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(arr[i]<arr[j]){
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }
  printf("Sorted array is:\n");
  for(i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
  printf("\n\n");
  printf("Enter the element to be inserted in the beginning\n");
  scanf("%d",&x);
  printf("Enter the position\n");
  scanf("%d",&p);
  //insertion of the element>>
  for(i=n-1; i>p-2; i--){
    arr[i+1] = arr[i];
  }
  arr[p-1] = x;
  for(i=0; i<=n; i++){
    printf("%d ",arr[i]);
  }
}
