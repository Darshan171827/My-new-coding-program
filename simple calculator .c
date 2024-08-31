#include<stdio.h>
void main()
{
  int a,b;
  char oper; 
  printf("enter the value of a");
  scanf("%d",&a);
  printf("enter the value of b");
  scanf("%d",&b);
  printf("enter the opertaor( +,-,*,/,):");
  scanf(" %c",&oper);
  switch(oper){
    case '+':
      printf("sum is %d\n",a+b);
       break;
    case '-':
      printf("sub is %d\n",a-b);
       break;
    case'*':
      printf("mul is %d\n",a*b);
      break;
    case '/':
      if(b!=0){
        printf("the division is %d\n",a/b);
     }else{
        printf("division by zero is not allowed.\n");  
     }
      break;
    default:
     printf("invalid operator.\n");
  }
  }
