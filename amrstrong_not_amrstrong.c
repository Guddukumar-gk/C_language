//Amrstrong and not Amrstrong
#include<stdio.h>
void main()
{
    int rem,sum=0,num,temp;
    printf("Enter the number");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }
    if(temp==sum)
        printf("this is Amrstrong number");
    else
        printf("this is not Amrstrong number");
}
