// fing out the reverse number
#include<stdio.h>
void main()
{
    int rem,num,sum=0;
    printf("Enter the digits");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
     printf("this is reverse number=%d\n",sum);
}
