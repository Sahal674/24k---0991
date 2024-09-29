#include<stdio.h>
int main(){
int num1 , num2 , num3;
printf("enter 3 numbers");
scanf("%d%d%d", &num1 , &num2 , &num3);
if(num1 > num2){
if(num1 > num3){
printf("%d is largest",num1);}
else if(num2 > num1){
if(num2 > num3){
printf("%d is largest",num2);}
else{printf("largest is %d",num3);}
}
return 0;
}