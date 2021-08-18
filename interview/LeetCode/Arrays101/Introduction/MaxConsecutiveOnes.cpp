// Copyright (c) hoduchieu01
int max(int a, int b){
    if(a >= b) 
        return a;
    return b;
}

int findMaxConsecutiveOnes(int* nums, int numsSize){
    int res = 0;
    int cnt = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] == 1) 
            cnt ++;
        else
            cnt = 0;
        res = max(res,cnt);
    }
    return res;
}