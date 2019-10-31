#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int j = 0;
void factorrization(int *a, int *b) {
	int i;
la: for (i = 2; i < a[j]; i++) {
	if (a[j] % i == 0) {
		a[j + 1] = a[j] / i;
		b[j] = i;
		j++;
		goto la;
	}
}
	if (i == a[j])
		b[j] = a[j];
}
int main() {
	int a[20];
	int b[20];
	int i;
	printf("请输入一个正整数：\n");
	scanf("%d", a);
	factorrization(a, b);
	for (i = 0; i <= j;i++) {
		printf("%d\n", b[i]);
	}
	return 0;
}


