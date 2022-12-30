#include<stdio.h>
#include<conio.h>

#define SIZE 5
int a[SIZE],top=-1;

void push(int x)
{
    if(top==SIZE-1)
        printf("Error!Stack Overflow.\n");
    else
    {
        ++top;
        a[top]=x;
    }
}

void pop()
{
    if(top==-1)
        printf("Error!Stack Underflow.\n");
    else
    {
        top--;
    }
}

void traverse()
{
    if(top==-1)
        printf("The stack is empty.\n");
    else
    {
        printf("Elements in stack: \n");
        for(int i=0;i<=top;i++)
        {
            printf("%d\t",a[i]);
        }
        printf("\n");
    }
}
void main()
{
    push(11);
    push(22);
    push(33);
    traverse();
    pop();
    traverse();
    pop();
    traverse();
}