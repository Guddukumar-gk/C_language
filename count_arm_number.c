

#include<stdio.h>
int arm(int n)
{
    int rem,sum=0,t=n;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        sum=sum+rem*rem*rem;
    }
    if(t==sum)
    return 1;
    else
    return 0;
}
int main()
{
    int n,i;
    printf("Enter the number  ");
    scanf("%d",&n);
    for(i=1; i<=n; ++i)
    {
        if(arm(i)==1)
        printf("%d\n",i);
        
    }
    return 0;
}
