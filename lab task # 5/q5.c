#include<stdio.h>
int main(){
int num1 , num2;
printf("enter 2 numbers");
scanf("%d%d", &num1 , &num2);
num1 > num2 ? printf("%d is gereter then %d", num1 , num2) : printf("%d is gereter then %d", num2 , num1);
return 0;
}