#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
char* str_cat(char* str1, char* str2)
{
	char* ret = str1;
	while (*str1)
	{
		str1++;
	}
	while (*str1++ = *str2++)
	{
		;
	}
	return ret;
}
int main()
{
	char str1[20];
	char  str2[20];
	printf("ÇëÊäÈëÁ½¸ö×Ö·û´®£º\n");
	scanf("%s%s", str1, str2);
	str_cat(str1, str2);
	printf("%s\n", str1);
	return 0;
}