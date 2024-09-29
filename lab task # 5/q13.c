#include<stdio.h>
int main(){
char ch , enc , dec;
int key;
printf("enter an character");
scanf("%c",&ch);
printf("enter integer key ");
scanf("%d",&key);
enc = ch&key;
printf("encrypted char = %c", enc);
dec = enc&key;
printf("decryted char = %c", dec);
return 0;
}