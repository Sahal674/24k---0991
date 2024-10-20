#include<stdio.h>
int main(){
	int numArray[] = {4,1,6,8,10,21,8,9,2,6};
	int min , max , i , num;
	min = 4;
	max = 4;
	for(i = 1 ; i < 10 ; i++){
	num = numArray[i];
	if(num > max){
		max = num;
	}
	else if(num < min){
		min = num; 
	}
	}
	printf("max value is : %d \n", max);
	printf("min value is : %d \n", min);
	return 0;
}