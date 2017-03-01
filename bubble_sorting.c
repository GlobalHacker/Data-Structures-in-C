#include <stdio.h>
int main()
{
  int arr[10],i,n,j,temp;
  printf("Enter the no.of elements in the array\n");
  scanf("%d",&n);
  printf("Enter the elements\n");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  //sorting
  for(i=0;i<n;i++){
    for(j=1;j<n;j++){
      if(arr[j-1] > arr[j]){
        temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = temp;
      }
    }
  }

  printf("Sorted array is: ");
  for(i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
}
