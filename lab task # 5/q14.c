#include<stdio.h>
int main(){
int age , income , creditScore;
printf("pls enter age , income and credit score");
scanf("%d%d%d", &age , &income , &creditScore );
if(age > 18 && income > 15000 && creditScore >= 750){
printf("you are eligible for the loan");}
else{printf("you are not eligible for a loan");}
return 0;
}