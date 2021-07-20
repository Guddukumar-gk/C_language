#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a,p,r,x,n;
    printf("enter the principal :");
    scanf("%f",&p);
    printf("enter the rate:");
    scanf("%f",&r);
    printf("enter the time:");
    scanf("%f",&n);
    x=(100+r)/100;
    a=p*pow(x,n);
    printf("the total amount=%f",a);
    getch;
}
