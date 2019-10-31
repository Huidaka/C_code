//#include <stdio.h>
//int main()
//{
//	int i, j;
//	printf("100到200之间的素数：\n");
//	for (i = 100; i <= 200; i++) {
//		for (j = 2; j < i; j++) 
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
#include<stdio.h>
int Sushu(int x) {
	int i;
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main() {
	int i;
	for (i = 100; i <= 200; i++) {
		if (Sushu(i))
			printf("%d\n", i);
	}
}