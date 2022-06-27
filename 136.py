class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        elements = set(nums)
        for el in elements:
            nums.remove(el)
        
        for el in elements:
            if el not in nums:
                return el
