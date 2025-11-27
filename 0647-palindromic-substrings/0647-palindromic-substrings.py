class Solution:
    def countSubstrings(self, s: str) -> int:

        totalCount = 0
        for i in range(len(s)):
            #odd lengths
            l = i
            r = i
            while l >= 0 and r < len(s) and s[l] == s[r]:
                totalCount += 1
                l -= 1
                r += 1

            #even lengths
            l = i
            r = i+1
            while l >= 0 and r < len(s) and s[l] == s[r]:
                totalCount += 1
                l -= 1
                r += 1

        return totalCount





        
        