#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int a, b,d;
	int x = 0;
	int c[200];
	int i, j; 
	char arr[200][20];
	printf("����������������ͱ�������\n");
	scanf("%d%d",&a,&b);
	while(a < 2 || a > 200){
		printf("����������������������������������ͱ���������\n");
		scanf("%d%d", &a, &b);
	}
	while (b < 1 || b > 10000) {
		printf("����������������������������������ͱ���������\n");
		scanf("%d%d", &a, &b);
	}
	printf("����������������ֺͶ���÷�\n");
	for (i = 0; i < a; i++) {
		scanf("%s%d",&arr[i],&c[i]);
	}
	for (j = 0; j < a;j++) {
		x += c[j];
	}
	d = b * 3 - x;
	
	printf("ƽ�ֵĳ�����%d\n",d);
	return 0;
}