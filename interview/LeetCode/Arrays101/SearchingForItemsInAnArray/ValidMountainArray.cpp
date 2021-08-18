// Copyright (c) hoduchieu01
bool validMountainArray(int *arr, int arrSize)
{
    bool check = true;
    int peak = arr[0];
    int pos = 0;
    for (int i = 0; i < arrSize - 1; i++)
    {
        if (arr[i] == arr[i + 1])
            check = 0;
        else if (arr[i] > arr[i + 1])
        {
            peak = arr[i];
            pos = i;
            break;
        }
    }
    if (pos == 0)
        check = 0;
    for (int i = pos; i < arrSize - 1; i++)
    {
        if (arr[i] == arr[i + 1])
            check = 0;
        else if (arr[i] < arr[i + 1])
            check = 0;
    }
    return check;
}