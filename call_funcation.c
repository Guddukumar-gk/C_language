#include<stdio.h>
int add(int,int);
int mul(int,int);
void main()
{
    int a,b,c;
    printf("enter the value: a & b");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("this is sum: %d\n",c);
    c=mul(a,b);
    printf("this result: %d",c);
}
int add(int x,int y)
{
    int z;
    z=x+y;
    return z;
}
int mul(int x,int y)
{
    int z;
    z=x*y;
    return z;
}
