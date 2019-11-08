#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
int* twoSum(int* nums, int numsSize, int target, int * returnSize) {

	int i = 0;
	int j = 0;
	int flag = -1;
	int *a = (int *)malloc(sizeof(int) * 2);
	for (i = 0; i < numsSize; i++)
	{
		if (i == flag)
		{
			continue;
		}
		for (j = 0; j < numsSize; j++)
		{
			if (i == j)
			{
				continue;
			}
			if ((nums[i] + nums[j]) == target)
			{
				a[0] = i;
				a[1] = j;
				return a;
			}
			if (nums[i] == nums[j])
			{
				flag = j;
			}
		}
		
	}
	return a;
}
int main()
{
	int nums[] = { -3,4,3,90};
	int* returnSize = NULL;
	int target = 0;
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int *a = twoSum(nums, numsSize, target, returnSize);
	printf("%d,%d",*a, *(a+1));
	return 0;
}
