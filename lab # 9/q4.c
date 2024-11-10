#include<stdio.h>
#include<string.h>
int calculate(int a , int b , char opp){
	int ans;
	if(strcmp(opp , "+") == 0 ){
		ans = a + b;
	}
	else if(strcmp(opp , "-") == 0 ){
		ans = a - b;
	}
	else if(strcmp(opp , "*") == 0 ){
		ans = a * b;
	}
	else if(strcmp(opp , "/") == 0 ){
		ans = a / b;
	}
	else {printf("not valid opperator");}
	return ans;
}
