class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        area = 0
        leftPointer = 0
        rightPointer = len(height) - 1
        while(leftPointer < rightPointer):
            h = height[leftPointer] if height[leftPointer] < height[rightPointer] else height[rightPointer]
            area = h * (rightPointer - leftPointer) if area < h * (rightPointer - leftPointer) else area
            if height[leftPointer] <= height[rightPointer]:
                leftPointer += 1
            else:
                rightPointer -= 1
        return area