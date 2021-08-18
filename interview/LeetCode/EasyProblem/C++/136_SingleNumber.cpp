// Copyright (c) hoduchieu01
/*
    Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.  
    Algorithm: Because of a xor a = 0 and a xor 0 = a, we can xor all numbers in array together to find the unique number.
    Time Complexity: O(n) and Space Complexity: O(n)
*/
int singleNumber(int* nums, int numsSize){
    int ans = 0;
    for (int i=0; i <= numsSize; i++){
        ans ^= nums[i];
    }
    return ans;
}
