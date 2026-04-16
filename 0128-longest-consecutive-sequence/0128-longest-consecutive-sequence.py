class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        
        numbers = set()

        for i in nums:
            numbers.add(i)

        largest = 0
        for i in numbers:
            if i-1 not in numbers:
                currNum = i
                currCount = 1

                while currNum+1 in numbers:
                    currCount += 1
                    currNum += 1

                largest = max(currCount, largest)

        return largest


        