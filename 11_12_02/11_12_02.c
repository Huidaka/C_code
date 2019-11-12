#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double my_pow(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else if (k > 0)
	{
		k--;
		return n * my_pow(n, k);
	}
	else
	{
		k++;
		return (1 / (float)n) * my_pow(n, k);
	}
}
int main()
{
	int n = 5;
	int k = -3;
	printf("%f", my_pow(n, k));
	return 0;
}