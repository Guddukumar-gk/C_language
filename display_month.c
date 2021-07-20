#include <stdio.h>

void main()
{
    int num;
    printf("enter the month number");
    scanf("%d",&num);
    
    switch(num)
    {
        case 1: printf("january"); 
        break;
        case 2: printf("february"); 
        break;
        case 3: printf("march"); 
        break;
        case 4: printf("april");
        break;
        case 5: printf("may"); 
        break;
        case 6: printf("june"); 
        break;
        case 7: printf("july"); 
        break;
        case 8: printf("august"); 
        break;
        case 9: printf("september"); 
        break;
        case 10: printf("otocber"); 
        break;
        case 11: printf("november"); 
        break;
        case 12: printf("december"); 
        break;
        defult: printf("invild choice. enter a no between 1and 12"); 
        break;
    }
    
    
}
