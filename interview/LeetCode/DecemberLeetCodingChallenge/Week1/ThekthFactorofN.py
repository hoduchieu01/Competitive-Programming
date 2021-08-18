// Copyright (c) hoduchieu01
/*
    Given two positive integers n and k.
    A factor of an integer n is defined as an integer i where n % i == 0.
    Consider a list of all factors of n sorted in ascending order, return the kth factor in this list or return -1 if n has less than k factors.
    Math Algorithm: Time Complexity: O(sqrt(n)) & Space Complexity: O(min(k,N))
    Return: N / divisors[len(divisors) - k] if k <= len(divisors) and -1 otherwise
*/
class Solution:
    def kthFactor(self, n: int, k: int) -> int:
        divisors, sqrt_n = [], int(n**0.5)
        for x in range(1, sqrt_n + 1):
            if n % x == 0:
                k -= 1
                divisors.append(x)
                if k == 0:
                    return x
        
        if (sqrt_n * sqrt_n == n):
            k += 1
                
        n_div = len(divisors)
        return n // divisors[n_div - k] if k <= n_div else -1