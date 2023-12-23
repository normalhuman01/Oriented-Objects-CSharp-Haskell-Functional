class Solution(object):
    def fib(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n <= 1: return n
        p1 = 0
        p2 = 1
        for i in range(1, n):
            temp = p1 + p2
            p1 = p2
            p2 = temp
        return p2