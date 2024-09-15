#include<stdio.h>
int main(){
int id , units , pretotal , newtotal , subcharge;
char name[10];
printf("pls enter id , name and units");
scanf("%d%s%d", &id , &name , &units);
if(units<=199){
pretotal = 16.20*units;}
else if (units >= 200 && units < 300){
pretotal = 20.10*units;}
else if (units >= 300 && units < 500){
pretotal  = 27.10*units;}
else{pretotal = 35.9*units;}
if(pretotal > 18000){
subcharge = pretotal*0.15;}
else{subcharge = 0;}
newtotal = pretotal + subcharge;
printf("coustumer id %d\n", id);
printf("coustumer name %s\n", name);
printf("units consumed:%d\n",units);
printf("amount charges per unit %d\n", pretotal);
printf("subcharge amount : &d/n ", subcharge);
printf("net amount paid by the coustomer : %d\n", newtotal);
return 0;
}