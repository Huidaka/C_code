#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
long long int count = 0;
int Jump(int n)
{
	if (n == 1)
	{
		count++;
		return 1;
	}
	else if (n == 2)
	{
		count += 2;
		return 2;
	}
	else
	{
		return Jump(n - 1) + Jump(n - 2);
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	Jump(n);
	printf("%lld\n", count);
}

