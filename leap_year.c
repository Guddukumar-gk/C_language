#include<stdio.h>
int main()
{
    printf("Enter the year ");
    int year;
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("leap year ");
    }
    else
    {
        printf("not a leap year ");
    }
}