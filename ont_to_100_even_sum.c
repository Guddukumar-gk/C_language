#include<stdio.h>
void main()
{
    int i,sum=0,num;
    printf("Enter the number ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(i%2==0)
        sum=sum+i;
    }
    printf("this is sum=%d",sum);
}
