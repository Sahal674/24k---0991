#include<stdio.h>
int main(){
int num , flag;
printf("pls enter an number");
scanf("%d", &num);
if(num%5 == 0 && num%3 == 0){
flag = 1;}
else{flag = 0;}
if(flag == 1){
printf("number is divisible by both 3 and 5");}
else{printf("number is not divisible by both 3 and 5");}
return 0;
}