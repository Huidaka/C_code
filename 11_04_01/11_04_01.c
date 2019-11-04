#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	int x = 0;
	for (i = 0; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			x++;
		}
		if (i / 10 == 9)
		{
			x++;
		}
	}
	printf("%d\n", x);
	return  0;
}
