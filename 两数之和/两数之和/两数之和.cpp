#define  _CRT_SECURE_NO_WARNINGS 1

#include <malloc.h>
#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    returnSize = (int*)malloc(sizeof(int) * 2);
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if ((nums[i] + nums[j]) == target)
            {
                returnSize[0] = i;
                returnSize[1] = j;
                return returnSize;
                break;
            }
            else
            {
                ;
            }
        }
    }
    return returnSize;
}

int main()
{
    int arr[5] = { 2,7,3,6,8 };
    int taget = 9;
    int* ret = NULL;
    ret = twoSum(arr, 5, 9, ret);
    printf("%d %d", ret[0], ret[1]);

    return 0;

}