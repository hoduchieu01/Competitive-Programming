// Copyright (c) hoduchieu01
int digitsNumber(int n){
    int res = 0;
    while(n > 0){
        n /= 10;
        res ++;
    }
    return res;
}

int findNumbers(int* nums, int numsSize){
    int ans = 0;
    for (int i = 0; i < numsSize; i++){
        if(digitsNumber(nums[i]) % 2 == 0) ans ++;
    }
    return ans; 
}