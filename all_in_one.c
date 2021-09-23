//calculate,triangle,rectangle,square,circle,simple,compound intrest:
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
    float a,b,h,c;
    int z,g;
    printf("press 1 for area of triangle\n");
    printf("press 2 for area of rectangle\n");
    printf("press 3 for area of circle\n");
    printf("press 4 for area of square\n");
    printf("press 5 for calculate\n");
    printf("press 6 for simple intrest\n");
    printf("press 7 for compound intrest\n");
    printf("press your option");
    scanf("%d",&z);
    switch(z)
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
        case 4: printf("enter the lenght");
               scanf("%f",&b);
               a=b*b/2;
               printf("the area of square=%f",a);
               break;
//
        case 5: printf("enter the value a & b");
                scanf("%f%f",&a,&b);
                printf("press 1 for addition\n");
                printf("press 2 for substracation\n");
                printf("press 3 for multipacation\n");
                printf("press 4 for divison\n");
                printf("Enter The Choice : ");
                scanf("%d",&g);
                switch(g)
                {
                    case 1: c=a+b;
                            printf("the addition is=%f",c);
                            break;
                    case 2: c=a-b;
                            printf("the substracation is=%f",c);
                            break;
                    case 3: c=a*b;
                            printf("the multipacation is=%f",c);
                            break;
                    case 4: c=a/b;
                            printf("the division is=%f",c);
                            break;
                            getch;
                }
                break;
// simple insterest
        case 6: printf("Enter The Prinicipal : ");
                scanf("%f",&a);
                printf("Enter The Rate=");
                scanf("%f",&b);
                printf("Enter The Time=");
                scanf("%f",&c);
                h=a*b*c/100;
                printf("Total EMI=%f",h);
// compound insterest;
        case 7: printf("Enter The Principal :");
                scanf("%f",&a);
                printf("Enter The Rate:");
                scanf("%f",&b);
                printf("enter the time:");
                scanf("%f",&c);
                h=(100+b)/100;
                a=a*pow(h,c);
    printf("the total amount=%f",a);
        default: printf("choose the valid option");
    }
}



