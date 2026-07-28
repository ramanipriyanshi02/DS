#include <stdio.h>
#include <conio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push()
{
      int item;

      if(top == MAX-1)
      {
         printf("\nStack is full Overflow");
      }
      else
      {
         printf("\nEnter the element:");
         scanf("%d",&item);

         top++;
         stack[top] = item;
         printf("\nEnter element successfuly",item);
      }
}
void main()
{
    push();
    push();
    push();

    getch();
}
