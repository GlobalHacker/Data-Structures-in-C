#include <stdio.h>
int main()
{
  int arr[30],n,i,x,mid,start,end;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  printf("Enter the elements\n");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printf("\nEnter the element to be deleted\n");
  scanf("%d",&x);

  start = 0;
  end = n-1;
  mid = (start + end)/2;

  while(start<=end && x!=arr[mid]){
    if(x < arr[mid]){
      end = mid - 1;
    }
    else if(x > arr[mid]){
      start = mid + 1;
    }
    mid = (start + end)/2;
  }

  for(i=mid; i<n; i++){
    arr[i] = arr[i+1];
  }
  printf("Final Array is: \n");
  for(i=0;i<n-1;i++){
    printf("%d ",arr[i]);
  }
}
