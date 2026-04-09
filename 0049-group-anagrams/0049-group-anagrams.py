class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:

        dictt = {}

        for i in strs:
            ss = "".join(sorted(i))
            if ss in dictt:
                dictt[ss].append(i)
            else:
                dictt[ss] = [i]

        op = []
        for i in dictt:
            op.append(dictt[i])
        return op
        

        