#include<stdio.h>
#include<string.h>
void check(int a){
	if(a%2 == 0){
		printf("prime");
	}
	else{
		printf("not prime ");
	}
}
int main(){
	int num;
	printf("enetre number");
	scanf("%d",num);
	check(num);
	
}