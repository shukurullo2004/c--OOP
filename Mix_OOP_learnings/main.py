class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        for x in nums:
            x_i = nums.index(x)
            for y in nums:
                y_i = nums.index(y)
                if (x+y) == target  and x_i == y_i:
                    return(x_i, y_i)