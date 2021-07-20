#include<stdio.h>
void main()
{
    int rem,no,binary=0,i=1;
    printf("Enter the decimal number");
    scanf("%d",&no);
    while(no!=0)
    {
        rem=no%2;
        no=no/2;
        binary=binary+(rem*i);
        i=i*10;
    }
    printf("this is binary number=%d\n",binary);
}
