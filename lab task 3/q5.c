#include <stdio.h>
int main()
{
printf("enter principle between 100 to 1000000 , rate of interest between 5 to 10 and time peroid between 1 to 10 years");
int principle , rate , time;
float si;
scanf("%d%d%d", &principle , &rate , &time);
si = (principle*rate*time)/100;
printf("simple interet is %f", si);
return 0; 
}