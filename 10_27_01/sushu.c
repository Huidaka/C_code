#include <stdio.h>
int main()
{
	int i, j;
	//int k = 0;
	printf("100��200֮���������");
	for (i = 3; i <= 20; i++) {
		for (j = 2; j < i; j++) 
		{
			if (i % j != 0)
			{

				printf("%d ", i);
				break;
			}
			if (i%j == 0) 
			{
				break;
			}
		}
		//if (k == 0)
		//{

		//}
		
		//k = 0;
	}
	return 0;
}