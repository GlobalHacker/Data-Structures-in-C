#include <stdio.h>
int main()
{
  int arr[10],i,j,temp;
  printf("Entert 10 elements\n");
  for(i=0;i<10;i++){
    scanf("%d",&arr[i]);
    //sorting
    temp = arr[i];
    j = i-1;
    while(temp < arr[j] && j>=0){
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = temp;
  }
  printf("Sorted List: ");
  for(i=0;i<10;i++){
    printf("%d ",arr[i]);
  }
}
