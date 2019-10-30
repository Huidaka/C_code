#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b,c;
	int i;
	printf("请输入两个数\n");
	scanf("%d%d", &a, &b);
	if (a > b)
		c = a;
	else if (a < b)
		c = b;
	else
		printf("%d\n", a);
	for (i = c; i >= 1; i--) {
		if (a % i == 0 && b % i == 0)
			break;
	}
	printf("%d", i);
	return 0;
}