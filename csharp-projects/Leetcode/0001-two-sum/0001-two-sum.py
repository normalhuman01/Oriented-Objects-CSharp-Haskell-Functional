class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        numberDictionary = {}
        for i in range(len(nums)):
            difference = target - nums[i]
            if difference in numberDictionary:
                return [i, numberDictionary[difference]]
            else:
                numberDictionary[nums[i]] = i
        return []