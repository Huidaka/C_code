#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	int j;
	int k;
	int n;
	printf("��������Ҫ��ӡ��������������\n");
	scanf("%d", &n);
	for (i = 1; i <= (n + 1) / 2; i++)
	{
		for (k = ((n + 1) / 2) - i; k > 0; k--)
		{
			printf(" ");
		}
		for (j = 1; j <= (2 * i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = ((n + 1)/2) - 1; i >= 1; i--)
	{
		for (k = (n + 1)/2 - i; k > 0; k--)
		{
			printf(" ");
		}
		for (j = 1; j <= (2 * i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

