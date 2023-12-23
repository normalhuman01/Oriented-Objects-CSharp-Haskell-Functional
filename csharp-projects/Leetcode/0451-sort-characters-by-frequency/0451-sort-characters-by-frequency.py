class Solution(object):
    def frequencySort(self, s):
        """
        :type s: str
        :rtype: str
        """
        dictionary = {}
        for character in s:
            if character in dictionary.keys():
                dictionary[character] += 1
            else:
                dictionary[character] = 1
        sortedCharacters = sorted(dictionary.items(), key = lambda x:x[1], reverse = True)
        string = ''
        for item in sortedCharacters:
            for i in range(item[1]):
                string = string + item[0]
        return string