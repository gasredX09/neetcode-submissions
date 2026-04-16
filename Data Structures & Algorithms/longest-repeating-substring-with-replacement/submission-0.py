class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        n = len(s)
        l = 0
        maxCount = 0
        result = 0
        counts = dict()

        for r in range(n):
            counts[s[r]] = counts.get(s[r], 0) + 1
            maxCount = max(maxCount, counts[s[r]])
            windowSize = r - l + 1
            if windowSize - maxCount > k:
                counts[s[l]] -= 1
                l += 1

            result = max(result, r - l + 1)
        return result
        