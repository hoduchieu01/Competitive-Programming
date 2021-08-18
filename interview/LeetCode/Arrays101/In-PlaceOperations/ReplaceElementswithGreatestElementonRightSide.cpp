// Copyright (c) hoduchieu01
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *replaceElements(int *arr, int arrSize, int *returnSize)
{
    *returnSize = arrSize;
    int max = arr[arrSize - 1];
    for (int i = arrSize - 1; i > 0; i--)
    {
        if (arr[i] >= max)
            max = arr[i];
        arr[i] = max;
    }
    for (int i = 0; i < arrSize - 1; i++)    {
        arr[i] = arr[i + 1];
    }
    arr[arrSize - 1] = -1;
    return arr;
}