#include<stdio.h>
//int main() {
//	int a = 1;
//	int b = 2;
//	int c, d, e;
//	c = a & b;
//	d = a | b;
//	e = a ^ b;
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//	return 0;

int main() {
	int a = 1;
	int b = 2;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d,%d", a, b);
	return 0;
}