class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        sHash = {}
        tHash = {}
        for i in range(len(s)):
            if s[i] not in sHash:
                sHash[s[i]] = t[i]
            if t[i] not in tHash:
                tHash[t[i]] = s[i]
            if sHash[s[i]] != t[i] or tHash[t[i]] != s[i]:
                return False
        return True
        