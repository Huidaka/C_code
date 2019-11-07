#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int ch;
	while ((ch = getchar()) != EOF)
	{
		if (ch > '0' && ch<'9')
		{
			continue;
	    }
		else if(ch >= 65 && ch <= 96)
		{
			ch = ch + 32;
		}
		else if (ch >= 97 && ch <= 128)
		{
			ch = ch - 32;
		}
		putchar(ch);
	}
	return 0;
}
