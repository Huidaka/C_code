#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void init(int arr[],int number)
{
	int i;
	for (i = 0; i < number; i++)
	{
		scanf("%d", &arr[i]);
	}
}
void empty(int arr[], int number)
{
	int j;
	for (j = 0; j < number; j++)
	{
		arr[j] = 0;
	}
}
void reverse(int arr[], int number)
{
	int k;
	int tmp;
	int tmp2 = number-1;
	if (number % 2 == 0)
	{
		for (k = 0; k < number/2; k++)
		{
			tmp = arr[k];
			arr[k] = arr[tmp2];
			arr[tmp2] = tmp;
			tmp2 -= 1;
		}
	}
	else
	{
		for (k = 0; k < (number-1)/2; k++)
		{
			tmp = arr[k];
			arr[k] = arr[tmp2];
			arr[tmp2] = tmp;
			tmp2 -= 1;
		}
	}
}
void print(int arr[], int number)
{
	int i;
	for (i = 0; i <= number - 1; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[7];
	int number = sizeof(arr) / sizeof(arr[0]);
	init(arr, number);
	print(arr, number);
	reverse(arr, number);
	print(arr, number);
	empty(arr, number);
	print(arr, number);
	return 0;
}
