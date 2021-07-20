#include<stdio.h>
void main()
{
    int fact=1,i,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        fact=fact*i;
    }
    printf("the factroial is:%d",fact);
    
}