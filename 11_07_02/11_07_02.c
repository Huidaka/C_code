#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int  main()
{
	int count = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int o = 0;
	int p = 0;
	int arr[5][5] = { 1,2,3,4,5,16,17,18,19,6,15,24,25,20,7,14,23,22,21,8,13,12,11,10,9};
	int m =5;
	int n =5;
	for (i = 0; i <= m / 2; i++)
	{
		if (count == m * n)
		{
			return 0;
		}
		for (j = i; j <= n-1-i; j++)
		{
			printf("%d ", arr[i][j]);
			count++;
		}
		if (count == m * n)
		{
			return 0;
		}
		for (k = i+1; k <= m-1- i; k++)
		{
			printf("%d ", arr[k][n-1-i]);
			count++;
		}
		if (count == m * n)
		{
			return 0;
		}
		for (o = n-2-i; o >= i; o--)
		{
			printf("%d ", arr[m-1-i][o]);
			count++;
		}
		if (count == m * n)
		{
			return 0;
		}
		for (p = m-2-i; p >= i + 1; p--)
		{
			printf("%d ", arr[p][i]);
			count++;
		}
	}
	return 0;
}