#include<stdio.h>
#include<string.h>
void swap(int *a , int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
	
}
int main(){
	int num1 , num2;
	printf("pls enter twe number");
	scanf("%d %d", &num1 , &num2);
	swap(&num1 , &num2);
	printf("num1 is now %d and two is now %d", num1 , num2);
}