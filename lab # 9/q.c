#include<stdio.h>
#include<string.h>
void chck( char array[5][20]){
	char word[20] , ch;
	for(int i = 0 ; i < 5 ; i++){
		for (int j = 20 ; j >= 0 ; j--){
			c = array[i][j];
			if(c != \0){
				strcat(word, ch);
			}
		}
		if(strcmp(array[i], word) == 0){
			printf("word %d is pal \n", i + 1);
		}
		else{
			printf("word %d is not pal \n", i + 1);
		}
		
	}
}