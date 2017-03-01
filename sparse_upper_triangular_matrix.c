#include <stdio.h>
int main()
{
  int arr[50][50], i, k ,r ,c , nz, j, m, n, temp, LABLE;
  printf("Enter the size of matrix: \n");
  scanf("%d",&m);
  scanf("%d",&n);
  printf("\nEnter the number of non-zero elements in matrix\n");
  scanf("%d",&nz);
  LABLE:for(k=0;k<nz;k++){
  printf("\nEnter the row and column\n");
  scanf("%d %d",&r,&c);
  if((r>m)||(c>n)){
    printf("OOPS :-( Enter the valid position try again!!!!!!\n\n");
    goto LABLE;
  }
  printf("Enter the value\n");
  scanf("%d",&arr[r][c]);
  printf("Index[%d]    Row[%d]    Column[%d]  Value: %d    \n",k,r,c,arr[r][c]);
  }
  //printing the sparse matrix
  printf("Sparse Matrix\n");
  for(i=0; i<m; i++){
    for(j=0; j<n; j++){
      if(arr[i][j]>0||arr[i][j]<0)
        printf("%d ",arr[i][j]);
      else
        printf("%d ",arr[i][j]=0);
    }
    printf("\n");
  }
  printf("Upper Traingular Matrix\n");
  for(i=0; i<m; i++){
    for(j=i;j>=1;j--)
      printf("  ");
    for(j=0; j<n; j++){
      if(i<=j){
        printf("%d ",arr[i][j]);
      }
    }
    printf("\n");
  }
}
