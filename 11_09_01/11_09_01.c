#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	char input[20];
	char password[] = "123456789";
	for (i = 1; i <= 3; i++)
	{
		printf("���������룺");
		scanf("%s", &input);
		if (strcmp(input,password) == 0)
		{
			printf("��½�ɹ�");
			break;
		}
		else
		{
			if (i == 3)
			{
				printf("���������û�л�����\n");
				break;
			}
			printf("����������������루�㻹��%d�λ��ᣩ\n",3-i);
		}
	}
	return 0;
}

