#include <stdio.h>
int main()
{
  int arr[3][3], i, j, k;
  printf("Enter the matrix of size 3x3\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      scanf("%d",&arr[i][j]);
    }
  }
printf("Lower triangular Matrix\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      if(i>=j)
        printf("%d ",arr[i][j]);
      else
        printf("%d ",0);
    }
    printf("\n");
  }
}
