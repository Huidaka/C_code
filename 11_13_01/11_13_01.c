#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
int judge_huiwen(char* str)
{
	assert(str != NULL);
	int i;
	int count = 0;
	char* flage = str;
	while (*str++)
	{
		count++;
	}
	for (i = 0; i < count/2; i++)
	{
		if (flage[i] != flage[count- i-1])
		{
			return 0;
		}
	}
	if (i == count / 2)
	{
		return 1;
	}
}
int main()
{
	char arr[] = "";
	printf("%d",judge_huiwen(arr));
	return 0;
}
