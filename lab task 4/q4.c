#include<stdio.h>
int main(){
int price , newprice;
printf("pls enter the amount");
scanf("%d", &price);
if(price > 500&&price < 2000){
newprice = 0.95*price;}
else if(price > 2000&&price < 4000){
newprice = 0.9*price;}
else if(price > 4000&&price < 6000){
newprice = 0.8*price;}
else if(price > 6000){
newprice = 0.65*price;}
else{newprice = price;}
printf("new price is %d",newprice);
return 0;}