#include<stdio.h>
int main(){
printf("pls enter a number");
int num;
scanf("%d", &num);
num != 0 ? num > 0 ? printf("number is positive") : printf("number is negitive") : printf("number is zero");
return 0;
}