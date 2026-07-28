#include<stdio.h>
#include<conio.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push(int value)
{
   if(top == MAX-1)
     printf("\nStack Overflow");
   else
   {
     top++;
     stack[top] =value;
   }
}

void peep(int pos)
{
   int index;

   if(top == -1)
   {
     printf("\nStack Underflow");
     return;
   }

   index = top - pos + 1;

   if(index <0)
    printf("\nInvalid Position");
   else
    printf("\nElement at Position %d = %d, pos,stack[index]);
}
void main()
{
    int pos;

    push(10);
    push(20);
    push(30);
    push(40);

    printf("\nEnter Position from top:");
    scanf("%d",&pos);

    peep(pos);
    getch();

}
