#include<stdio.h>
void main()
{
    float si,p,r,t;
    printf("Enter p");
    scanf("%f",&p);
    printf("Enter r");
    scanf("%f",&r);
    printf("Enter t");
    scanf("%f",&t);
    si= (p*r*t*12)/100;
    printf("%f",si);
}
