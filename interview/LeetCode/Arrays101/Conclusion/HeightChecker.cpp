// Copyright (c) hoduchieu01
int heightChecker(int *heights, int heightsSize)
{
    int heights_1[heightsSize];
    for (int i = 0; i < heightsSize; i++)
        heights_1[i] = heights[i];
    for (int i = 0; i < heightsSize; i++)
    {
        for (int j = i + 1; j < heightsSize; j++)
        {
            if (heights_1[i] > heights_1[j])
            {
                int tmp = heights_1[j];
                heights_1[j] = heights_1[i];
                heights_1[i] = tmp;
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < heightsSize; i++)
        if (heights[i] != heights_1[i])
            cnt++;
    return cnt;
}