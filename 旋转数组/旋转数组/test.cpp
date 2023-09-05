#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>

//������ת����
//������� ʱ�临�Ӷ�O(k*numsSize)


void rotate1(int* nums, int numsSize, int k)
{
	k %= numsSize;
	for (int i = 0; i < k; i++)
	{
		int tmp = nums[numsSize - 1];
		for (int j = 1; j < numsSize; j++)
		{
			nums[j] = nums[j - 1];
		}
		nums[0] = tmp;
	}
}

//�ռ任ʱ��
void rotate2(int* nums, int numsSize, int k)
{
	k %= numsSize;
	int* arr = (int*)malloc(sizeof(int) * numsSize);
	for (int i = 0; i < numsSize; i++)
	{
		arr[i] = nums[i];
	}
	for (int i = 0; i < k; i++)
	{
		nums[i] = arr[numsSize - k + i];
	}
	for (int i = k; i < numsSize; i++)
	{
		nums[i] = arr[i - k];
	}
}

//�ռ临�Ӷ�ΪO(1)�������淨
void reverse(int* left, int* right)
{
	
	while (left < right)
	{
		int tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void rotate3(int* nums, int numsSize, int k)
{
	k %= numsSize;
	reverse(nums, nums + numsSize - 1);
	reverse(nums, nums + k - 1);
	reverse(nums + k, nums + numsSize - 1);
}


