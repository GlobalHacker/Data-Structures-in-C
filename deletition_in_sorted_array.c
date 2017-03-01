#include <stdio.h>
int main()
{
  int arr[30],n,i,j,x,mid,start,end,temp;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  printf("Enter the elements\n");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  //sorting arr[];
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      if(arr[i] < arr[j]){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  printf("Sorted Array\n");
  for(i=0;i<n;i++){
    printf("%d ", arr[i]);
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
  printf("%d\n",mid);
  for(i=mid; i<n; i++){
    arr[i] = arr[i+1];
  }
  for(i=0;i<n-1;i++){
    printf("%d ",arr[i]);
  }
}
