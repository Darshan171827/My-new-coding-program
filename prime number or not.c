#include <stdio.h>
void main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  if(n%2==0){
    printf("Not a prime number");
  }
  else{
    printf("Prime number");
  }
}
