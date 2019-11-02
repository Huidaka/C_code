#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int tmp = 0;
	int a = 18;
	int b = 24;

	while (tmp = a % b)
	{
		a = b;
		b = tmp;
	}
	printf("%d\n", b);
}
//int main()
//{
//	int a = 30;
//	int b = 24;
//	int x;
//	do 
//	{
//		if (a > b)
//		{
//			x = a % b;
//			if (x == 0)
//			{
//				printf("%d", b);
//				return 0;
//			}
//			a = b;
//			b = x;
//		}
//		else
//		{
//			x = b % a;
//			if (x == 0)
//			{
//				printf("%d", a);
//				return 0;
//			}
//			b  = a;
//			a = x;
//		}
//	} while (x != 0);
//	
//	return 0;
//
//}