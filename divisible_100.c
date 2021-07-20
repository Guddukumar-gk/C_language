#include<stdio.h>
void main(){

float Num_In;
printf("Please Enter Any Number :");
scanf("%f",&Num_In);
if((int) Num_In % 100==0){
 printf("Divisible by 100");
} else{
 printf("Not Divisible by 100");
 }
}

