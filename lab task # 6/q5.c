#include<stdio.h>
int main(){
int a , limit , count;
printf("enter first value");
scanf("%d",&a);
printf("enter number of terms ");
scanf("&d",&limit);
for(count = 0;count <= limit;count++){
printf("%d\n",a);
a = a/count;
}
return 0;
}