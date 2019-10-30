//求10个数的最大值
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 int main() {
	int arr[10];
	int c;
	int i, j;
	printf("请输入10个数\n");
	for (i = 0; i < 10; i++) {
			scanf("%d",& arr[i]);
	}
	for (j = 1; j <= 9; j++) {
		if (arr[0] < arr[j]) {
			c = arr[j];
			arr[j] = arr[0];
			arr[0] = c;
	    }
	}
	printf("%d", arr[0]);
	return 0;
}