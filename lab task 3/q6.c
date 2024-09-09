#include <stdio.h>
int main()
{
int y1 , y2 , x1 , x2;
float y , x , slope;
y1 = 4;
y2 = 2;
x1 = 5;
x2 = 3;
y = y2-y1;
x = x2-x1;
slope = y/x;
printf("the slope is %.3f", slope);
return 0;
}