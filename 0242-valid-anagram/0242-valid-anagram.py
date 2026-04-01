class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        mp = {}

        if len(s) != len(t):
            return False

        for i in s:
            if i in mp:
                mp[i] += 1
            else:
                mp[i] = 1
        
        for c in t:
            if c not in mp:
                return False
            else:
                mp[c] -= 1
                if mp[c] == 0:
                    mp.pop(c)

        if len(mp) > 0:
            return False

        return True
    