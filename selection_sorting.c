#include <stdio.h>
int main()
{
  int arr[100],n,i,j,temp,min;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  printf("Enter the elements one by one\n");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  //sorting
  for(i=0; i<n; i++){
    min = i;
    for(j=i+1;j<n;j++){
      if(arr[min] > arr[j])
        min = j;
    }
    temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
  }
  printf("Sorted List: ");
  for(i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
}
