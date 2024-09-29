#include<stdio.h>
int main(){
int age;
printf("pls ennter age");
scanf("%d",&age);
if(age < 20){
if(age < 13){
printf("child");}
else{printf("teenager");}
}
if(age > 20){
if(age > 60){
printf("senoir");}
else{printf("adult");}
}
return 0;
}