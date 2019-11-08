#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	char input[20];
	char password[] = "123456789";
	for (i = 1; i <= 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", &input);
		if (strcmp(input,password) == 0)
		{
			printf("登陆成功");
			break;
		}
		else
		{
			if (i == 3)
			{
				printf("密码错误，你没有机会了\n");
				break;
			}
			printf("密码错误，请重新输入（你还有%d次机会）\n",3-i);
		}
	}
	return 0;
}

