class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        charCounts = set()
        start = 0
        end = 0
        maxLen = 0
        while start < len(s) and end < len(s):
            if s[end] not in charCounts:
                charCounts.add(s[end])
                end += 1
            else:
                toRemove = s[start]
                start += 1
                charCounts.remove(toRemove)
            maxLen = max(maxLen, end - start)
        return maxLen


        