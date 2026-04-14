class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        dict = {}
        op = []

        for i in nums:
            dict[i] = dict.get(i, 0) + 1
        sortedDict = sorted(dict.items(), key = lambda x : x[1], reverse = True)

        for i in sortedDict:
            if k == 0:
                break

            op.append(i[0])
            k -= 1

        return op