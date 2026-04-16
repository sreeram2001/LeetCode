class Solution:
    def isPalindrome(self, s: str) -> bool:
        
        newString = ""

        for i in s:
            if i.isalnum():
                newString += i.lower()
        
        
        l = 0
        r = len(newString)-1
        while l <= r:
            if newString[l] != newString[r]:
                return False
            l+=1
            r-=1
        return True