#include<stdio.h>
int main(){
	int range , i , value , total;
	total = 0;
	printf("pls enter the range of the array \n");
	scanf("%d",&range);
	int array[range];
	for(i = 0 ; i < range ; i++){
		printf("enetr index value %d \n",i);
		scanf("%d",&value);
		total = total + value;
		array[i] = value;
	}
	printf("the total is %d ",total);

	return 0;
}