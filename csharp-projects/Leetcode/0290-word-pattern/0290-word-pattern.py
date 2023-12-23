class Solution(object):
    def wordPattern(self, pattern, s):
        """
        :type pattern: str
        :type s: str
        :rtype: bool
        """
        patternHash = {}
        stringHash = {}
        s = s.split(" ")
        if len(pattern) != len(s):
            return False
        for i in range(len(pattern)):
            if pattern[i] not in patternHash:
                patternHash[pattern[i]] = s[i]
            if s[i] not in stringHash:
                stringHash[s[i]] = pattern[i]
            if patternHash[pattern[i]] != s[i] or stringHash[s[i]] != pattern[i]:
                return False
        return True