// Copyright (c) hoduchieu01
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *sortedSquares(int *nums, int numsSize, int *returnSize)
{
    *returnSize = numsSize;
    for (int i = 0; i < numsSize; i++)
        nums[i] *= nums[i];
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] > nums[j])
            {
                int tmp = nums[j];
                nums[j] = nums[i];
                nums[i] = tmp;
            }
        }
    }
    return nums;
}