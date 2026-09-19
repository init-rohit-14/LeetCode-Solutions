class Solution(object):
    def singleNumber(self, nums):
        for i in range(len(nums)):
            count = nums.count(nums[i])
            if count == 1:
                return nums[i]