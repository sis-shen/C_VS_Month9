#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <malloc.h>


int removeDuplicates(int* nums, int numsSize) {
    int count = 1;
    for (int i = 0; i < numsSize - 1; i++)
    {
        if (nums[i] != nums[i + 1])
        {
            count++;
        }
    }
    int* cpy = (int*) malloc(sizeof(int) * count);
    int* ccpy = cpy;
    if (cpy == NULL)
    {
        return count;
    }
    *ccpy++ = nums[0];
    for (int i = 0; i < numsSize - 1; i++)
    {
        if (nums[i] != nums[i + 1])
        {
            *ccpy++ = nums[i + 1];
        }

    }
    ccpy = cpy;
    for (int i = 0; i < count; i++)
    {
        *nums++ = *ccpy++;
    }

    free(cpy);
    cpy = NULL;
    ccpy = NULL;
    return count;

}