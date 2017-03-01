#include <stdio.h>
int main()
{
  int arr[100],n,x,temp,j,start,end,i,mid;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  printf("Enter the elements\n");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  //sorting
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(arr[i] < arr[j]){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  printf("Sorted Array: \n");
  for(i=0; i<n; i++){
    printf("%d ",arr[i]);
  }
  printf("\n\n");
  //searching element
  printf("Enter the element to be searched\n");
  scanf("%d",&x);
  start = 0;
  end = n-1;
  mid = (start + end)/2;
  while(start<=end && x!=arr[mid]){
    if(x < arr[mid]){
      end = mid - 1;
    }
    else if (x > arr[mid]){
      start = mid + 1;
    }
    mid = (start + end)/2;
  }
  printf("fvrjgbuerhb %d\n",mid);
  if(x == arr[mid]){
    printf("Search Successfull position of number is %d\n",mid+1);
  }
  else{
    printf("Search unsuccessfull\n");
  }
}
