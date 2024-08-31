#include<stdio.h>
void main()
{
  int n,rev,r,d;
  printf("enter the n value");
  scanf("%d",&n);
  r=n;
  rev=0;
  while(n!=0)
    {
      d=n%10;
      rev=rev*10+d;
      n=n/10;
    }
  printf("%d\n",rev);
  if(rev==r)
  {
    printf("the number is palindrome");
  }
  else{
    printf("the number is not palindrome");
  }
}

