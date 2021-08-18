// Copyright (c) hoduchieu01
// Input: [1,1,2,2,2,3,3,3] Output: [1,2,3]
int removeDuplicates(int* nums, int numsSize){
    if(numsSize == 0) return 0;
    int i = 0;
    for(int  j = 1; j < numsSize; j++){
        if(nums[j] != nums[i]){
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}