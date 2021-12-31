#include<stdio.h>
void main()
{
    int n,la[10],i,key;
    printf("Enter the size of array ");
    scanf("%d",&n);
    printf("\nenter the array of elements ");
    i=1;
    while(i<=n)
    {
        scanf("%d",&la[i]);
        i++;
    }
    while (i<=n)
    {
        printf("%d",la[i]);
        i++;
    }
    
}