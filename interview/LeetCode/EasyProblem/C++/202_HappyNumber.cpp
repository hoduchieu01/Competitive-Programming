// Copyright (c) hoduchieu01
/*
    Write an algorithm to determine if a number is a happy number
    Algorithms: If slow == fast, there are loops endlessly in a cycle
    A -> B -> C -> D if (D -> B) => not is a happy number
*/
#include <bits/stdc++.h>

using namespace std;

int numSquareSum(int n)

{    int squareSum = 0;
    while (n != 0)
    {
        squareSum += (n % 10) * (n % 10);
        n /= 10;
    }
    return squareSum;
} 
bool isHappy(int n)
{

    int slow, fast;
    //    initialize slow and fast by n
    slow = fast = n;
    do
    {
        //    move slow number by one iteration
        slow = numSquareSum(slow);

        //    move fast number by two iteration
        fast = numSquareSum(numSquareSum(fast));
        cout << slow << " " << fast << endl;
    } while (slow != fast);

    //    if both number meet at 1, then return true
    return (slow == 1);
}
int main()
{   

    freopen("a.inp","r",stdin);
    int n;
    cin >> n;
    if (isHappy(n) == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
