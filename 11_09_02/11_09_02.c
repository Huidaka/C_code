#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int mystrlen(char* str)
{
	char* p = str; 
	while (*str)
	{
		str++;
	 }
	return str - p;
}
int main()
{
	char str[] =  "gfdgsfsfs";
	printf("%d\n", mystrlen(str));
	return 0;
}
