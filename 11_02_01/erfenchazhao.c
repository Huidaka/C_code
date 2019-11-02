#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int right = 9;
	int mid;
	while (left <= right){
		mid = (left + right) / 2;
		if (a[mid] > 1.5) {
			right = mid-1;
		}
		else if (a[mid] < 1.5) {
			left = mid+1;
		}
		else {
			printf("找到了下标为%d\n", mid);
			return 0;
		}
	}
	if (left > right) {
		printf("找不到");
	}
	return 0;
}