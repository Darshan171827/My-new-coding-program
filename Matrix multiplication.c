#include<stdio.h>
void main()
{
  int a[10][10],b[10][10],c[10][10],m1,n1,m2,n2,i,j,k;
  printf("Enter the order of matrix A:");
  scanf("%d%d",&m1,&n1);
  printf("Enter the order of matrix B:");
  scanf("%d%d",&m2,&n2);
  if(n1!=m2)
  {
    printf("Matrix multiplication is not possible\n");
  }
  printf("enter the matrix A elements");
  for(i=0;i<m1;i++)
    {
      for(j=0;j<n1;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
  printf("enter the matrix B elements\n");
  for(i=0;i<m2;i++)
    {
      for(j=0;j<n2;j++)
        {
          scanf("%d",&b[i][j]);
        }
    }
  printf("the matrix is A\n");
  for(i=0;i<m1;i++)
    {
      for(j=0;j<n1;j++)
        {
          printf("%d\t",a[i][j]);
        }printf("\n");
    }
  printf("the matrix is B\n");
  for(i=0;i<m2;i++)
    {
      for(j=0;j<n2;j++)
        {
          printf("%d\t",b[i][j]);
        }printf("\n");
    }
  for(i=0;i<n1;i++)
    {
      for(j=0;j<n2;j++)
        {
          c[i][j]=0;
      for(k=0;k<m1;k++)
        c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
    }
  printf("the matrix is C\n");
  for(i=0;i<n1;i++)
    {
      for(j=0;j<n2;j++)
        {
          printf("%d\t",c[i][j]);
        }
      printf("\n");
    }
  printf("DARSHAN");
}
