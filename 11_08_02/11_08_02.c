#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void mean()
{
	printf("***********************************\n");
	printf("*******     1.玩 游 戏     ********\n");
	printf("*******     0.退出游戏     ********\n");
	printf("***********************************\n");
}
void game()
{
	int ret;
	int input;
	ret	= rand() % 100 + 1;
	while(1)
	{
		printf("请输入你猜的数字：");
		scanf("%d", &input);
		if (input < ret)
		{
			printf("  猜小了\n");
		}
		if (input > ret)
		{
			printf("  猜大了\n");
		}
		if (input == ret)
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}
}
int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do {
		
		mean();
		printf("请选择：\n");
		scanf("%d", &input);
		if (input == 1)
		{
			game();
		}
		else if (input == 0)
		{
			printf("退出游戏\n");
			break;
		}
		else
		{
			printf("选择错误，请重新选择\n");
		}

	} while (1);
	return 0;
}
