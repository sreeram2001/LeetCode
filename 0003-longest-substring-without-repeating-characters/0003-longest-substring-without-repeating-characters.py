class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        
        window = {}
        maxSize = 0
        l = 0
        r = 0

        while r < len(s):
            if s[r] in window:
                while s[r] in window:
                    window.pop(s[l])
                    l += 1

            window[s[r]] = r
            r += 1

            maxSize = max(maxSize,r-l)

        return maxSize
