// Copyright (c) hoduchieu01
bool checkIfExist(int *arr, int arrSize)
{
    int ans = 0;
    for (int i = 0; i < arrSize; i++)
    {
        for (int j = 0; j < arrSize; j++)
        {
            if (arr[i] == 2 * arr[j] && i != j)
                ans = 1;
        }
    }
    return ans;
}