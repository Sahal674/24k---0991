#include <stdio.h>
int main()
{
int taxrate , salary;
int newsalary , tax;
printf("pls enter salary and taxrate in percentage ");
scanf("%d%d", &taxrate , &salary);
tax = (salary*taxrate)/100;
newsalary = salary-tax;
printf("the tax the useer have to pay is %d and the newsalary is %d ", tax , newsalary);
return 0;
}