#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#define Max 5
int top = -1,stack[Max];
void push();
void pop();
void display();
void exit();

void main()
{
    int ch;
    while (1)
    {
    
        printf("\n*** Stack Menu ***");
        printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\n\nEnter your choice(1-4):");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:push();
                break;
            case 2:pop();
                break;
            case 3:display();
                break;
            case 4:exit(0);
                break;
            
            default:
                printf("Wrong selection ");
                break;
        }
    }
}
void push()
{
    int val;
    if(top == Max-1)
    {
        printf("Stack is full !!!");
    }
    else
    {
        printf("Enter the element for puch Stack ");
        scanf("%d",&val);
        top = top+1;
        stack[top] = val;

    }

}
void pop()
{
    if(top == -1)
    {
        printf("Stack id empty !!! ");
    }
    else
    {
        printf("Delete element is %d",stack[top]);
        top = top-1;
    }

}
void display()
{
    int i;

    if(top == -1)
    {
        printf("Stack is empty ");
    }
    else
    {
        printf("\n stack is ...\n");
        for(i=top;i>=0;--i)
        {
            printf("%d\n",stack[top]);
        }
    }
  

}