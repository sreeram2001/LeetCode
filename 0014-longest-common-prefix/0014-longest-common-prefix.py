class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        
        strs.sort()
        str1 = strs[0]
        str2 = strs[-1]

        i = 0
        op = ""
        while i < len(str1) and str1[i] == str2[i]:
            op += str1[i]
            i += 1

        return op
        