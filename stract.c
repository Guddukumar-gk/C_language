#include<stdio.h>
#include<conio.h>
struct student
{
    int roll;
    float percentage;  
};
void main()
{
    struct student s1,s2;
    {
        s1.roll = 5;
        s1.percentage = 50.55;
        s2.roll=5;
        s2.percentage = 34.4;
        printf("%d\n",s1.roll);
        printf("%f\n",s1.percentage);
        printf("%d\n",s2.roll);
        printf("%f\n",s2.percentage);
    };
    getch();
    
}
