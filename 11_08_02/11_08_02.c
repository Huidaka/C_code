#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void mean()
{
	printf("***********************************\n");
	printf("*******     1.�� �� Ϸ     ********\n");
	printf("*******     0.�˳���Ϸ     ********\n");
	printf("***********************************\n");
}
void game()
{
	int ret;
	int input;
	ret	= rand() % 100 + 1;
	while(1)
	{
		printf("��������µ����֣�");
		scanf("%d", &input);
		if (input < ret)
		{
			printf("  ��С��\n");
		}
		if (input > ret)
		{
			printf("  �´���\n");
		}
		if (input == ret)
		{
			printf("��ϲ��¶���\n");
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
		printf("��ѡ��\n");
		scanf("%d", &input);
		if (input == 1)
		{
			game();
		}
		else if (input == 0)
		{
			printf("�˳���Ϸ\n");
			break;
		}
		else
		{
			printf("ѡ�����������ѡ��\n");
		}

	} while (1);
	return 0;
}
