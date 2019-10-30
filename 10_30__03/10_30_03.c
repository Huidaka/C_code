//将三个数从大到小输出
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c,d;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b) {
		d = a;
		a = b;
		b = d;
	}
	if (b < c) {
		d = b;
		b = c;
		c = d;
	}
	if (a < b) {
		d = a;
		a = b;
		b = d;
	}
		printf("%d,%d,%d\n",a,b,c);
	return 0;
}