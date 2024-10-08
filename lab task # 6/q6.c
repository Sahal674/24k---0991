#include<stdio.h>
int main(){
int first , second , third , count , limit;
first = 1;
second = 2;
printf("enter number of terms");
scanf("%d",&limit);
printf("%d %d\n",first,second);
third = first * second;
for(count=0;count<=limit;count++){
printf("%d\n",third);
first = second;
second = third;
third = first*second;
}
return 0;
}