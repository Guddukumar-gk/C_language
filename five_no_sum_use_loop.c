#include<stdio.h>
void main()
{
    int sum_in,sum,i;
    for(i=1;i<=5;++i)
    {
        printf("enter the number ");
        scanf("%d",&sum);
        sum_in=sum_in+sum;
    }
    printf("the total sum is:%d",sum_in);
}

