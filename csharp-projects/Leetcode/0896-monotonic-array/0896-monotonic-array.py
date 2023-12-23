class Solution(object):
    def isMonotonic(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        if nums[0] < nums[-1]:
            for i in range(len(nums)-1):
                if nums[i] > nums[i+1]:
                    return False
        elif nums[0] > nums[-1]:
            for i in range(len(nums)-1):
                if nums[i] < nums[i+1]:
                    return False
        else:
            for i in range(len(nums)-1):
                if nums[i] != nums[i+1]:
                    return False
        return True