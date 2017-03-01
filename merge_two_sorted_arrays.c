#include <stdio.h>

int main()
{
  int a[100], b[100], i,j,temp,m,n,t;
  //first array a[0];
  printf("Enter the number of elements for array a[]\n");
  scanf("%d",&m);
  t = m-1;
  printf("Enter %d integers\n",m);
  for(i=0; i<m; i++){
    scanf("%d",&a[i]);
  }
  //sorting first array a[];
  for(i=0; i<m; i++){
    for(j=0; j<m; j++){
      if(a[i]<a[j]){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  printf("\nSorted first array:\n");
  for(i=0; i<m; i++){
    printf("%d ",a[i]);
  }
  temp = NULL;
  //second array b[0];
  printf("\nEnter the number of elements for array b[]\n");
  scanf("%d",&n);
  printf("Enter %d integers\n",n);
  for(i=0;i<n;i++){
    scanf("%d",&b[i]);
  }
  //sorting array b[];
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      if(b[i]<b[j]){
        temp = b[i];
        b[i] = b[j];
        b[j] = temp;
      }
    }
  }
  printf("\nSorted second array:\n");
  for(i=0; i<n; i++){
    printf("%d ",b[i]);
  }
  m = 0;
  m = t+n+1;
  i = 0;
  for(j=t; j<=m; j++){
      a[j+1] = b[i];
      i++;
  }

  for(i=0; i<=m; i++){
    for(j=0; j<=m; j++)
    if(a[i] < a[j]){
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
  }
  }
  printf("\nArray is:\n");
  for(i=0;i<m;i++){
    printf("%d ",a[i]);
  }
}
