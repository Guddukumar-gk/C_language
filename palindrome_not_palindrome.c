// palindrome and not palindrome
#include<stdio.h>
void main()
{
    int rev=0,rem,num,temp;
    printf("Enter the number");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("the reverse of the number is:%d\n",rev);
    if(temp==rev)
    {
        printf("the is palindrome number");
    }
    else
    printf("the is not palindrome number");
}
