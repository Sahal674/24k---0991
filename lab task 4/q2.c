#include<stdio.h>
int main(){
int num1 , num2;
int result;
char operator;
printf("pls enter two numbers and an operator");
scanf("%d%d", &num1 , &num2);
scanf("%c", &operator);
if(operator == "+"){
result = num1+num2;}
else if(operator == "-"){
result = num1-num2;}
else if(operator == "*"){
result = num1*num2;}
else{
result = num1/num2;}
printf("the result is %d", result);
return 0;
}