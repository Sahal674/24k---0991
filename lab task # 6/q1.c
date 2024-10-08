#include<stdio.h>
int main(){
int num , result;
num = 1;
result = 0;
while(num!=0){
printf("pls enter an number\n");
scanf("%d",&num);
result = result + num;
printf("the result is %d \n",result);
}
return 0;
}