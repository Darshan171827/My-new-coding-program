#include<stdio.h>
void main()
{
  int a[5],i,num,mx,mn;
  printf("enter the number: ");
  scanf("%d",&num);
  printf("input %d elements of array:\n",num);
   for(i=0;i<num;i++)
      {
        printf("%d-",i);
        scanf("%d",&a[i]);
      }
  mn=a[0];
  mx=a[0];
  
    for(i=1;i<num;i++)
      {
        if(a[i]>mx)
        {
          mx=a[i];
          
        }
        else if(a[i]<mn)
        {
          mn=a[i];
        }
      }
  printf("minimum is %d\n",mn);
  printf("maximum is %d\n",mx);
  
  
}
