class Solution(object):
    def sortedSquares(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        left_pointer = 0
        right_pointer = len(nums) - 1
        squares = [0] * len(nums)
        for i in reversed(range(len(nums))):
            left_square = nums [left_pointer] ** 2
            right_square = nums [right_pointer] ** 2
            if left_square > right_square:
                squares[i] = left_square
                left_pointer += 1
            else:
                squares[i] = right_square
                right_pointer -= 1
        return squares