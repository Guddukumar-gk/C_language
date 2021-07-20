// find out speed , and , distance ,or time
#include<stdio.h>
void main()
{
    float s,t,d;
    int n;
    printf("press 1 for distance\n");
    printf("press 2 for speed\n");
    printf("press 3 for time\n");
    printf("Enter the choice");
    scanf("%d",&n);
    switch(n)
    {
//distance  
    case 1:
        printf("enter the speed & time");
        scanf("%f%f",&s,&t);
        d=s*t/100;
        printf("this distance=%fkm",d);
        break;
//speed
    case 2: 
        printf("Enter the distance & time");
        scanf("%f%f",&d,&t);
        s=d/t*100;
        printf("this speed=%fkm",s);
        break;
//time
    case 3: 
        printf("Enter the distance & speed");
        scanf("%f%f",&d,&s);
        t=d/s*60;
        printf("this time=%fmin",t);
        break;
    default: printf("invilid choice");
    }
}
