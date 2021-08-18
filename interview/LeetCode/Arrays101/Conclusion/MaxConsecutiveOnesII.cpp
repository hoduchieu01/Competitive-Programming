// Copyright (c) hoduchieu01
class Solution{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int left = 0, res = 0, flipped = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                flipped++;
            while (flipped > 1)
            {
                if (nums[left] == 0)
                    flipped--;
                left++;
            }
            res = max(res, i - left + 1);
        }
        return res;
    }
};