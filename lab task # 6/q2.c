#include<stdio.h>
int main(){
int num , count;
printf("pls enter a number ");
scanf("%d",&num);
count = 0;
while(num != 0){
num/=10;
count+=1;
}
if(count == 1 ){
printf("not multiple digit");
}
else{printf("is multilpe digit";)}


return 0;
}