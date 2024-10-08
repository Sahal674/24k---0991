#include<stdio.h>
int main(){
int num , falg , i , ans;
printf("enter number");
scanf("%d",&num);
falg = 0;
i = 2;
while(i<= num - 1 && flag == 0 ){
ans = num%i;
if(ans == 0){
falg = 1;
}
else{i+=1;}
}
if(falg == 1){
printf("composite");
} 
else{printf("not composite");}



return 0;
}