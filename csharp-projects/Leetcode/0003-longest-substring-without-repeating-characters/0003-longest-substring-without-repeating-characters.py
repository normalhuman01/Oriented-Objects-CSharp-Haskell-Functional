class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        longestSubstringLength = 0;
        if len(s) <= 1:
            longestSubstringLength = len(s);
        else:
            currentSubstring = s[0];
            for character in s:
                if character not in currentSubstring:
                    currentSubstring += character;
                else:
                    currentSubstring = currentSubstring[currentSubstring.index(character) + 1:] + character;
                if len(currentSubstring) > longestSubstringLength:
                    longestSubstringLength = len(currentSubstring);
        return longestSubstringLength;