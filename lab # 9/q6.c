include<stdio.h>
include<string.h>
void MaxandMin(int arr[],int *max , int *min , int size){
	*max = arr[0];
	*min = arr[0];
	for (int i = 1 ; i < size ; i ++){
		if(arr[i] > *max){
			*max = arr[i];
		}
		if(arr[i] < *min){
			*min = arr[i];
		}
	}
}
int main(){
	int n , min , max;
	printf("enetr size of aarru");
	scanf("%d",&n);
	int array[n];
	for(int i = 0 ; i < n ; i++){
		printf("enetrer e;lement %d \n", i);
		scanf("%d",&array[i]);
	}
	MaxandMin(array , n, &max , &min);
	printf("max is %d",max);
	printf("min is %d",min);
	return 0;
}
