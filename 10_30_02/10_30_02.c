//求10个数的最大值
#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
// int main() {
//	int arr[10];
//	int tmp = 0;
//	int i, j;
//	printf("请输入10个数\n");
//	for (i = 0; i < 10; i++) {
//			scanf("%d",& arr[i]);
//	}
//	for (j = 0; j <= 9; j++) {
//		if (tmp < arr[j]) {
//			tmp = arr[j];
//	    }
//	}
//	printf("%d", tmp);
//	return 0;
int main()
{
	int arr[10];
	int i;
	int j;
	int tmp;
	for (i = 0; i <= 9; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0; i<10; i++)
	{
		for (j = 0; j < 10-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i <= 9; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}