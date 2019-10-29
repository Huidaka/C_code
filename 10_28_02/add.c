#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	double a;
	double b;
	scanf("%lf%lf", &a, &b);
	if (a == b)
		return 0;
	if ((a < 0 && b < 0) || (a > 0 && b > 0))
	{
		a = a - b;
		b = a + b;
		a = b - a;
	}
	else {
		a = a + b;
		b = a - b;
		a = a - b;
	}
	printf("%.2lf,%.2lf\n", a, b);
	return 0;
}
