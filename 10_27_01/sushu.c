#include <stdio.h>
int main()
{
	int i, j;
	printf("100到200之间的素数：\n");
	for (i = 100; i <= 200; i++) {
		for (j = 2; j < i; j++) 
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}