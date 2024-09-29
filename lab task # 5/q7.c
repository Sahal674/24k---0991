#include<stdio.h>
int main(){
int num1 , num2;
printf("enter 2 numbers ");
scanf("%d%d", &num1 , &num2);
num1 = num1^num2;
num2 = num1^num2;
num1 = num1^num2;
printf("num1 is now %d and num 2 is now %d", num1 , num2);
return 0;
}