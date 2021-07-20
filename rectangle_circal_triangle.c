#include<stdio.h>
void main()
{
    float a,b,h;
    int n;
    printf("press 1 for area of triangle\n");
    printf("press 2 for area of rectangle\n");
    printf("press 3 for area of circle\n");
    printf("press 4 for area of square\n ");
    printf("press your option");
    scanf("%d",&n);
    switch(n)
    {
//for triangle
        case 1: printf("enter base & height");
               scanf("%f%f",&b,&h);
               b=0.5*b*h;
               printf("the area of triangle=%f",b);
               break;
//for rectangle
        case 2: printf("enter length & width");
               scanf("%f%f",&a,&b);
               a=a*b;
               printf("the area of rectangle=%f",a);
               break;
//for circle
        case 3: printf("enter the radius");
               scanf("%f",&a);
               b=3.14*a*a;
               printf("the area of circle=%f",b);
               break;
//for square
        case 4: printf("enter the area");
               scanf("%f",&b);
               a=b*b;
               printf("the area of square=%f",a);
               break;
    default:   printf("choose the valid option");
               
    }
}

