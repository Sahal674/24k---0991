#include<stdio.h>
int main(){
int citizen , age;
printf("pls enter 0 if not citizen and 1 if citizen");
scanf("%d", &citizen);
printf("pls enter your age");
scanf("%d" , &age);
if(citizen == 1 && age > 17){
printf("eligible to vote");}
else{printf("not eligible to vote");} 
return 0;
}