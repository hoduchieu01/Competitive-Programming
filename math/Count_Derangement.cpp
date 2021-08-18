// Copyright (c) hoduchieu01
/* 
Derangement list is a pemutation of the elements of set, such that no element appears in its original position. 
Count the number of derangements for n different objects.

Let D(n) be count of derangements for n different objects. D(n) = n * D(n-1) + (-1)^n = (n - 1) * [D(n-1) + D(n-2)]
*/
#include <bits/stdc++.h>

using namespace std;

int countDerangement(int n){
    if(n == 0 || n == 1) 
        return 0;
    else if(n == 2)
        return 1;
    else
        return (n - 1) * (countDerangement(n - 1) + countDerangement(n-2));
}

signed main(){
    int n;
    cin >> n;
    cout << "The number of derangements for n different objects\n" << countDerangement(n) << endl;
    return 0;
}