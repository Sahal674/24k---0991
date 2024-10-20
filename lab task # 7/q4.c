#include<stdio.h>
int main(){
	int n , i ;
	printf("pls enter array size ");
	scanf("%d",&n);
	int array[n];
	printf("ebter %d elements : \n" ,n);
	for (i = 0 ; i < n ; i++ ){
		scanf("%d",&array[i]);
	}
	for (i = 0 ; i < n - 1 ; i++){
		if(array[i] > array[i + 1]){
			int temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			i = -1;
			
		}
	}
	int foundDuplicate;
	foundDuplicate = 0;
	for(i = 0 ; i < n ; i++){
		if(array[i] == array[i + 1]){
			printf("duplicate found ");
			printf("%d",array[i]);
			foundDuplicate = 1;
		}
		
	}
	if(foundDuplicate == 0){
		printf("no duplicate ");
	}
	return 0;
}