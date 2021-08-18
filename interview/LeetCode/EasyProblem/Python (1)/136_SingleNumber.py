# Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

# Solution 1: Time complexity O(n^2) and Space complexity O(n)
# Algorithms: Iterate over all the elements in nums. If some number in nums is new to array, append it. Else If some number is already in the array, remove it
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        """
        :type nums: List[int]
        :rtype: int
        """
        no_duplicate_list = []
        for i in nums:
            if i not in no_duplicate_list:
                no_duplicate_list.append(i)
            else:
                no_duplicate_list.remove(i)
        return no_duplicate_list.pop()
    
