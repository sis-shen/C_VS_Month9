#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <malloc.h>

int find1(int* nums, int numsSize)
{
	int sum = numsSize * (numsSize + 1) / 2;//0~n«Û∫Õ
	for (int i = 0; i < numsSize; i++)
	{
		sum -= nums[i];
	}
	return sum;
}

int find2(int* nums, int numsSize)
{
	int* standard = (int*)malloc(sizeof(int) * (numsSize+1));
	for (int i = 0; i <= numsSize; i++)
	{
		standard[i] = -1;
	}
	for (int i = 0; i < numsSize; i++)
	{
		standard[nums[i]] = i;
	}
	for (int i = 0; i <= numsSize; i++)
	{
		if (standard[i] == -1)
		{
			return i;
		}
	}
	return 0;
}

int find3(int* nums, int numsSize)
{
	int ret = 0;
	for (int i = 0; i < numsSize; i++)
	{
		ret =ret^ (nums[i]) ^ i;
	}
	ret ^= numsSize;
	return ret;
}

int main()
{
	int arr[] = { 0,1,3 };
	int ret1 = find1(arr, 3);
	int ret2 = find2(arr, 3);
	int ret3 = find3(arr, 3);
	printf("%d\n%d\n%d\n", ret1, ret2, ret3);


	return 0;
}