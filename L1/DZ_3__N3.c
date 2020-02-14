
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c, res;
	printf("enter three numbers ");
	scanf("%d,%d,%d", &a, &b, &c);
	int e1, e2;
	e1 = 2 ^ 10;
	e2 = 2 ^ 21;
	if (abs(a+b+c)<e1)
	{
		res = a * b * c;
		printf("1) dobutok = %d\n", res);
	}
	if (abs(a + b + c) < e2)
	{
		res = a * b * c;
		printf("2) dobutok = %d", res);
	}
}