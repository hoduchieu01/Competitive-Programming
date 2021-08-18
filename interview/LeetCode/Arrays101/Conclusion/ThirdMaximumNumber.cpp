// Copyright (c) hoduchieu01
class Solution {
public:
    int thirdMax(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        auto it = unique(nums.begin(), nums.end());
        nums.erase(it, nums.end());
        return nums.size() < 3 ? nums[nums.size() - 1] : nums[nums.size() - 3];
    }
};