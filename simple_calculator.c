#include<stdio.h>
void main()
{
    float a,b,c;
    int n;
    printf("Enter the value a & b");
    scanf("%f%f",&a,&b);
    printf("press 1 for addition\n");
    printf("press 2 for subtraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");
    printf("enter the choice");
    scanf("%d",&n);
    switch(n)
    {
        case 1:c=a+b;
        printf("the addition is=%f",c);
        break;
        case 2:c=a-b;
        printf("the subtraction is=%f",c);
        break;
        case 3:c=a*b;
        printf("the multiply is=%f",c);
        break;
        case 4:c=a/b;
        printf("the division ia=%f",c);
        break;
        default: printf("enter correct value");
        
    }
}

