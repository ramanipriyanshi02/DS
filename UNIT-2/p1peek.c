#include <stdio.h>
#include <conio.h>

#define MAX 5
int stack[MAX];
int top = -1;

void push(int value)
{
  if (top == MAX-1)
  printf("\nStack Overflow");
  else
  {
    top++;
    stack[top]= value;
  }

}

void peek()
{
    if (top == -1)
        printf("\nStack Underflow");
    else
        printf("\nTop element = %d",stack[top]);
}
 void main()
 {
     push(10);
     push(20);
     push(30);

     peek();

     getch();
 }
