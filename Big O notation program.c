#include<stdio.h>
#include<stdlib.h>
#define maxsize 50

int arr[maxsize];
int size=0;

void display()
{
  int i;
  if(size==0)
  {
    printf("array is empty\n");
  }
  else
  {
    for(i=0;i<size;i++)
      {
        printf("%d ",arr[i]);
      }
    printf("\n");
  }
}
void insertatposition(int position,int element)
{
  int i;
  for(i=size;i>position;i--)
    {
      arr[i]=arr[i-1];
    }
  arr[position]=element;
  size++;
}
void deleteatposition(int position)
{
  int i;
  for(i=position;i<size;i++)
    {
      arr[i]=arr[i+1];
    }
  size--;
}
int main()
{
  while(1)
  {
    printf("1.insert end\n");
    printf("2.insert at  position\n");
    printf("3.delete at position\n");
    printf("4.display\n");
    printf("5.exit\n");
    int choice,position,element;
    printf("enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
      {
        case 1:
               if(size==maxsize)
               {
                 printf("array is full\n");
                 break;
               }
        printf("enter the element to be inserted\n");
        scanf("%d",&element);
        arr[size] = element;
        size++;
        break;
        case 2:
               if(size==maxsize)
               {
                 printf("array is full\n");
                 break;
               }
          printf("enter the position (position starts from 0): ");
          scanf("%d",&position);
          if(position<0)
          {
            printf("invalid position\n");
            break;
          }
        printf("enter the element to be inserted\n");
        scanf("%d",&element);
        insertatposition(position,element);
        break;
        case 3:
               if(size==0)
               {
                 printf("array is empty\n");
                 break;
               }  
        printf("enter the position to be deleted\n");
        scanf("%d",&position);
          if(position<0)
          {
            printf("invalid position\n");
            break;
          }
        deleteatposition(position);
        break;
        case 4:
               display();
        break;
        case 5:
               exit(0);
        default:
               printf("invalid choice\n");
      }
  }
  return 0;
}
