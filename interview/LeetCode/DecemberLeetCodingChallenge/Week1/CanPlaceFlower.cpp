// Copyright (c) hoduchieu01
/*
    You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.
    Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule.

    Time Complexity: O(n)
    Algorithm: Check x-1, x, x+1. If position x can be planted, change x to 1 and n--. If n <= 0 => true else false
*/

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n){
    for(int i = 0; i < flowerbedSize; i++){
        if(flowerbed[i] == 0 && (i==0 || flowerbed[i-1] == 0) && (i == flowerbedSize - 1 || flowerbed[i+1]==0)){
            n--;
            flowerbed[i] = 1;
        }
    }
    if (n <= 0) return true;
    else
        return false;
}