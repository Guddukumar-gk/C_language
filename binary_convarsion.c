#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
    int n,num,binary,decimal,octal,rem,i=1,j=1;
    printf("decimal to binary press 1\n");
    printf("decimal to octal  press 2\n");
    printf("octal to binary   press 3\n");
    printf("octal to decimal  press 4\n");
    printf("binary to octal   press 5\n");
    printf("binary to decimal press 6\n");
    printf("Enter the choice");
    scanf("%d",&n);
    switch (n)
    {
    case 1: //decimal to binary...
            printf("Enter the decimal number");
            scanf("%d",&num);
            binary=0;
             while(num!=0)
            {
                rem=num%2;
                num=num/2;
                binary=binary+(rem*i);
                i=i*10;
            }
            printf("this is binary number=%d\n",binary);
            break;
    case 2: //decimal to octal..
            printf("Enter the decimal number");
            scanf("%d",&num);
            octal=0;
             while(num!=0)
            {
                rem=num%8;
                octal=rem*i+octal;
                i=i*10;
                num=num/8;
            }   
            printf("this is octal number=%d",octal);
            break;
    case 3: //octal to binary;
            printf("Enter the octal number");
            scanf("%d",&num);
            octal=0;
             while(num!=0)
            {
                rem=num%10;
                octal=rem*j+octal;
                j=j*8;
                num=num/10;
            }   
            binary=0;
            while (octal!=0)
             {
                rem=octal%2;
                octal=octal/2;
                binary=binary+(rem*i);
                i=i*10;
            }
            printf("this is binary number=%d\n",binary);
            break;
    case 4: //octal to decimal..
            printf("Enter the octal number");
            scanf("%d",&num);
            octal=0;
            while(num!=0)
            {
                rem=num%10;
                octal=rem*i+octal;
                i=i*8;
                num=num/10;
            }   
            printf("this is decimal number=%d",octal);
            break;
    case 5: //binary to octal..
            printf("Enter the binary number");
            scanf("%d",&num);
            decimal=0;
            i=0;
            while(num>0)
            {
                rem=num%10;
                decimal=decimal+rem*pow(2,i);
                num=num/10;
                i++;
            }
            octal=0;
            while(decimal!=0)
            {
                rem=decimal%8;
                octal=rem*j+octal;
                j=j*10;
                decimal=decimal/8;
            }   
            printf("this is octal number=%d",octal); 
            break;
    case 6: //binary to decimal..
            printf("Enter the binary number");
            scanf("%d",&num);
            decimal=0;
             i=0;
            while(num>0)
            {
                rem=num%10;
                decimal=decimal+rem*pow(2,i);
                num=num/10;
                i++;
            }
            printf("this decimal number=%d",decimal);
            break;
    default: printf("choose the vilid number");
        break;
    }
}

