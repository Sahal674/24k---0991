#include<stdio.h>
int main(){
char ch;
printf("enter a character");
scanf("%c",&ch);
if(ch >= 97 && ch <= 122){
printf("%c is a smaoll carachter",ch);}
else if (ch >= 65 && ch <= 90){
printf("%c is a capital letter",ch);}
else if (ch >= 48 && ch <= 57){
printf("%c iS A Digit",ch);}
else{printf("%c is a special carachter",ch);}
return 0;
}