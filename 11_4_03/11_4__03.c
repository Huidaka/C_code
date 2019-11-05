#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int fic(n)
//{
//	if(n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fic(n - 1) + fic(n - 2);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", fic(n));
//	return 0;
//}
int fic(int n)
{
	int i = 0;
	int a = 1;
	int b = 1;
	int c = 0;
	for (i=1; i<=n-2; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", fic(n));
	return 0;
}
