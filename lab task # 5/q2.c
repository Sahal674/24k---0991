#include<stdio.h>
int main(){
int num;
printf("pls enter a number");
scanf("%d", &num);
if(num > 0){
if(num%2 == 0){
printf("number is positive even");}
else{printf("number is positive odd");}
}
else if(num < 0){
printf("number is negitive");}
else{printf("number is zero");}
return 0;
}