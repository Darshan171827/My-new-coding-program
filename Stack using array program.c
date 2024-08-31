#include<stdio.h>
#include<limits.h>
#define MAX_SIZE 20

int arr[MAX_SIZE];
int top = -1;

void push(int val){
    if(top == MAX_SIZE-1){
        printf("Stack Overflow\n");
        return;
    }
  arr[++top] = val;
}

int pop(){
    if(top == -1){
      printf("stack is empty\n");
      return INT_MIN;
    }
  return arr[top--];
}

int peek(){
    if(top == -1){
      printf("stack is empty\n");
      return INT_MIN;
    }
  return arr[top];
}
int main(){
  push(10);
  push(20);
  push(30);
  push(40);
  push(50);

  printf("After pushing 5 elements\n");
  printf("Top element: %d\n", peek());

  printf("Popped element: %d\n", pop());
  printf("Popped element: %d\n", pop());

  printf("After popping 2 elements\n");
  printf("Top element: %d\n", peek());

  return 0;
}

