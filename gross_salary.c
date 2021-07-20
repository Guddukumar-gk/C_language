#include <stdio.h>
void main()
{
    float gs,basic;
    printf("Enter the salry");
    scanf("%f",&basic);
    
    if(basic>=1||basic<=4000)
    {
        gs=basic+(0.10*basic)+(0.50*basic);
    }
    else if(basic>=4001||basic<=8000)
    {
        
        gs=basic+(basic*0.20)+(0.60*basic);
    }
    else if(basic>=8001||basic<=12000)
    {
        
        gs=basic+(basic*0.25)+(basic*0.70);
    }
    else if(basic>=12001)
    {
        
        gs=basic+(basic*0.30)+(basic*0.80);
    }
    printf("the gross salry=%f",gs);
}

