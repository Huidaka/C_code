#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//	int a, b,c;
//	int i;
//	printf("请输入两个数\n");
//	scanf("%d%d", &a, &b);
//	if (a > b)
//		c = b;
//	else if (a < b)
//		c = a;
//	else
//		printf("%d\n", a);
//	for (i = c; i >= 1; i--) {
//		if (a % i == 0 && b % i == 0)
//			break;
//	}
//	printf("%d", i);
//	return 0;
//}
int main() {
	int a, b,c;
	int i;
	printf("请输入两个数\n");
	scanf("%d%d", &a, &b);
	if (a > b) {
		c = a % b;
		if (a % b == 0) {
			printf("%d\n", b);
		}
	}
	else if(a < b){
		c = b % a;
		if (b % a == 0) {
			printf("%d\n", a);
		}
	}
	else if(a == b){
		printf("%d", a);
		return 0;
	}
	for (i = c; i > 1; i--) {
		if (a % i == 0 && b % i == 0) {
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}