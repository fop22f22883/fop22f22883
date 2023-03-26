/*To be completed during lab hours

Write a program in C to evaluate the following expression:

Float: a=1, b=2, c=3, sum1, sum3

Integer: x=1, y=2, z=3, sum2

a)    Sum1 = a*b/c

b)    Sum2 = (x+y%z *5-y)

c)    Sum3 = b-a/c*4*/
#include<stdio.h>
void main()
{
	float a = 1, b = 2, c = 3, sum1, sum3;
	int x = 1, y = 2, z = 3, sum2;

	sum1 = a * b / c;
	sum2 = (x + y % z * 5 - y);
	sum3 = b - a / c * 4;

	printf("sum1 = %f\n", sum1);
	printf("sum1 = %d\n", sum2);
	printf("sym1 = %f\n", sum3);
	printf("press any key to continue");

}
