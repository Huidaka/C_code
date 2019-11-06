#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	int a;
	int sn = 0;
	int tmp = 0;
	scanf("%d", &a);
	tmp = a;
	for(i=1; i<=5; i++)
	{
		sn += tmp;
		tmp = tmp * 10 + a;
	}
	printf("%d", sn);
	return 0;
}