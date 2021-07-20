//prime number and not a prime number
#include<stdio.h>
void main()
{
    int flag=0,num,i;
    printf("Enter the number ");
    scanf("%d",&num);
    for(i=2;i<=num-1;++i)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("not a prime number");
    }
    else
        printf("a prime number");
}
