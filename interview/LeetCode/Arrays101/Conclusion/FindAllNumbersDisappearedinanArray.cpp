class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        for(int i=0; i < n; i++){
            int x = abs(nums[i]);
            if(nums[x-1] > 0){
                nums[x-1] = (nums[x-1] * (-1));
            }
        }
        for(int i = 0; i < n; i++){
            if(nums[i] > 0){
                v.push_back(i+1);
            }
        }
        return v;   
    }
};