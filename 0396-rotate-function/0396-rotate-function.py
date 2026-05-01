class Solution:
    def maxRotateFunction(self, nums: List[int]) -> int:

        n = len(nums)
        totalSum = sum(nums)

        currF = 0

        for i in range(n):
            currF += (i)*(nums[i])
    
        op = currF

        for i in range(1, n):

            lastNum = nums[n-i]

            currF += totalSum - (n*lastNum)
            
            print(currF)

            op = max(op, currF)

        return op
        
        