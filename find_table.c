//digit num sum"
#include<stdio.h>
void main()
{
    int sum,rem,n,i;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=10;++i)
    {
        rem=n*i;
        printf("this table=%d\n",rem);
    }
}
