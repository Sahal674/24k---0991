#include <stdio.h>
int main()
{
printf("pls enter the avergae of the vehical");
int avg;
float liter , p1 , p2 , total , totalfuel ;
scanf("%u", &avg);
liter = 1207/avg;
p1 = 118*liter;
p2 = 123*liter;
total = p1+p2;
totalfuel = liter*2;
printf("the total fuel counsumed is %f and total cost is %f", totalfuel, total);

return 0;
}