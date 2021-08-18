// Copyright (c) hoduchieu01
/*
    Given two positive integers n and k.
    A factor of an integer n is defined as an integer i where n % i == 0.
    Consider a list of all factors of n sorted in ascending order, return the kth factor in this list or return -1 if n has less than k factors.
    Brute Force Algorithm: Time Complexity: O(n) & Space Complexity: O(n)
    
*/
int kthFactor(int n, int k){
    int factor[n+1];
    int numFactor = 0;
    for(int i = 1; i <= n; i++){
        if(n%i == 0){
            numFactor++;
            factor[numFactor] = i;
        }
    }
    if (k > numFactor) 
        return -1;
    return factor[k];
}