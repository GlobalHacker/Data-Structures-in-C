#include <stdio.h>
#include <conio.h>
int main()
{
  int arr[50],m1,n1,nz1,i,r1,c1;
  printf("Enter the size of first sparse matrix\n");
  scanf("%d %d",&m1,&n1);
  printf("Enter the number of non zero elements\n");
  scanf("%d",&nz1);
  for(i=0; i<nz1; i++){
    printf("Index [%d] ",i+1);
    printf(" Row : ");
    getche("%d ",&r1);
    printf(" Cloumn : ");
    scanf("%d ",&c1);
    printf("\n");
  }
}
