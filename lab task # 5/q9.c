#include<stdio.h>
int main(){
int year;
printf("enter a year");
scanf("%d"< &year);
if((year%4 == 0 && year%100 != 0) || (year%400 == 0)){
printf("is leap year");}
else{printf("is not lkeap year");}
return 0;
}