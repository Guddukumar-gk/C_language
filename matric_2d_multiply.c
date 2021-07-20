// array matrics multiply..
#include<stdio.h>
void main()
{
    int n,m;
    printf("\nEnter the array limits  ");
    scanf("%d%d",&n,&m);

    int i,array1[n][m],array2[n][m],c[n][m];
    int j;

    printf("\nEnter the array1.. ");

    for(i=1;i<=n;++i)
    {
        for(j=1;j<=m;++j)
        {
            scanf("%d",&array1[i][j]);
        }
    }

    printf("\nEnter the array2.. ");

    for(i=1;i<=n;++i)
    {
        for(j=1;j<=m;++j)
        {
            scanf("%d",&array2[i][j]);
        }
    }

    printf("\narray1\n");
    
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=m;++j)
        {
            printf("%d ",array1[i][j]);
        
        }printf("  \n");
    }
    printf("\n");
    printf("array2\n");

    for(i=1;i<=n;++i)
    {
        for(j=1;j<=m;++j)
        {
            printf("%d ",array2[i][j]);
        
        }printf("\n");
    }

    for(i=1;i<=n;++i)
    {
        for(j=1;j<=m;++j)
        {
            for(int k=1;k<=m;++k)
            {
                c[i][j]=0;
                c[i][j]=c[i][j]+array1[i][k]*array2[k][j];
            }
        }
    }

    printf("\nResults\n");
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=m;++j)
        {
            printf("%d ",c[i][j]);
        }printf("\n");
    }
}
