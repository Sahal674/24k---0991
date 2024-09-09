#include <stdio.h>
int main()
{			
	int num1 , num2;
	int temp = 0;
	printf("enter  number 1 and number 2");
	scanf("%d%d", &num1, &num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("number 1 changed to %d and number2 changed to %d", num1, num2);
	return 0;
}