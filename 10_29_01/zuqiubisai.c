#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int a, b,d;
	int x = 0;
	int c[200];
	int i, j; 
	char arr[200][20];
	printf("请输入比赛队伍数和比赛次数\n");
	scanf("%d%d",&a,&b);
	while(a < 2 || a > 200){
		printf("比赛队伍数有误，请重新输入比赛队伍数和比赛次数：\n");
		scanf("%d%d", &a, &b);
	}
	while (b < 1 || b > 10000) {
		printf("比赛队伍数有误，请重新输入比赛队伍数和比赛次数：\n");
		scanf("%d%d", &a, &b);
	}
	printf("请输入比赛队伍名字和队伍得分\n");
	for (i = 0; i < a; i++) {
		scanf("%s%d",&arr[i],&c[i]);
	}
	for (j = 0; j < a;j++) {
		x += c[j];
	}
	d = b * 3 - x;
	
	printf("平局的场数：%d\n",d);
	return 0;
}