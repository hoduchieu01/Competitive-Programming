// Copyright (c) hoduchieu01
class Solution {
public:
   vector<int> sortedSquares(vector<int>& nums) {
        int i, j, k = 0;
        vector<int>ans;
        
        while(k < nums.size() and nums[k] < 0)
			k++;

        i = k - 1, j = k;
                
        while(i >= 0 and j <= nums.size()-1)
        {
            if(abs(nums[i]) < nums[j]) {
               ans.push_back(pow(nums[i], 2));
                i--;
            }
            else {
               ans.push_back(pow(nums[j], 2));
                j++;
            } 
        }
        
        while(i >= 0) 
              ans.push_back(pow(nums[i--], 2));
        
        while(j <= nums.size()-1) 
              answer.push_back(pow(nums[j++], 2));
            
        return ans;
    }
};