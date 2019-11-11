#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<malloc.h>
int max_len(char* *pstr, int n)
{
	int i;
	int tmp = 0;
	for (i = 0; i < n; i++)
	{
		if ((int)strlen(*pstr) > tmp)
		{
			tmp = (int)strlen(*pstr);
		}
		pstr++;
	}
	return tmp;
}
int main()
{
	int n;
	int i;
	char* string[10] = {NULL};
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		string[i] = (void*)malloc(sizeof(char) * 10);
		scanf("%s", string[i]);
	}
	printf("%d\n",max_len(string,n));
	for (i = 0; i < n; i++)
	{
		free(string[i]);
	}
	return 0;
}
