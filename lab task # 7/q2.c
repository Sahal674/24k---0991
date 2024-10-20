#include<stdio.h>
int main(){
	int i , j , range , a , value;
	printf("enetr range \n");
	scanf("%d",&range);
	int array[range];
	for(i = 0 ; i < range ; i++){
		printf("enetr index value %d \n",i);
		scanf("%d",&value);
		array[i] = value;
	}
	for(j = range ; j >= 0 ; j--){
	a = array[j];
	printf(" %d ,",a);
	}
	return 0;
}