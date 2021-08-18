// Copyright (c) hoduchieu01
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* A, int ASize, int* returnSize){
    *returnSize = ASize;
    int B[ASize];
    for(int i = 0; i < ASize; i++) B[i] = A[i];
    int right = 0;
    int left = ASize - 1;
    for(int i = 0; i < ASize; i++){
        if(B[i] % 2 == 0){
            A[right] = B[i];
            right ++;
        }
        else{
            A[left] = B[i];
            left--;
        }
    }
    return A;
} 