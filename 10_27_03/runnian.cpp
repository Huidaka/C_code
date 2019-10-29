#include<stdio.h>
int main() {
	int i, j;
	printf("1000-2000年之间的闰年有：\n");
	for (i = 1000; i <= 2000; i++) {
		if (i % 100 == 0) {
			if (i % 400 == 0)
				printf("%d\n", i);
		}
		else {
			if ((i % 4 == 0) && (i % 100 != 0))
				printf("%d\n", i);
		}
	}   
	return 0;
}