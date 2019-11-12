#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//int mystrlen(const char* str)
//{
//	assert(str != NULL);
//	char* p = str; 
//	while (*str++)
//	{
//
//	 }
//	return  str-p-1;
//}
//int main()
//{
//	char str[] =  "gfdgsfsfs";
//	printf("%d\n", mystrlen(str));
//	return 0;
//}
int mystrlen(char* str)
{
	assert(str != NULL);
	if (*str == '\0')
	{
		return 0;
	}
	return 1+ mystrlen(++str);
}
int main()
{
	char str[] = "Huidaka";
	printf("%d\n", mystrlen(str));
	return 0;
}
