#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value)
{
    top++;
    stack[top] = value;
}

int pop()
{
    int value = stack[top];
    top--;
    return value;
}

int main()
{
    int n, i;
    long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            push(i);
        }

        while (top != -1)
        {
            factorial = factorial * pop();
        }

        printf("Factorial of %d = %lld", n, factorial);
    }

    return 0;
}
