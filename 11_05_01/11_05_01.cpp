#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int Count = 0;
void Unweave(int n ,int arr[])
{
	if (n > 9)
	{
		Unweave(n / 10,arr);
	}
	arr[Count] = n % 10;
	Count++;
}
int main()
{
	int arr[10];
	int i;
	int j;
	int sum = 0;
	for (i= 1; i < 1000; i++)
	{
		Unweave(i,arr);
		for (j = 0; j < Count; j++)
		{
			sum += pow(arr[j], Count);
		}
		if (sum == i)
		{
			printf("%d,", i);
		}
		Count = 0;
		sum = 0;
	}
	return 0;
}
