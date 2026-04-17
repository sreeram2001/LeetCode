class Solution:
    def minimumSum(self, nums: List[int]) -> int:
        leftSide = [float('inf') for i in range(len(nums))]
        rightSide = [float('inf')for i in range(len(nums))]

        leftSide[0] = nums[0]
        for i in range(1,len(nums)):
            leftSide[i] = min(nums[i], leftSide[i-1])

        rightSide[-1] = nums[-1]
        for i in range(len(nums)-2, -1, -1):
            rightSide[i] = min(nums[i], rightSide[i+1])

        minSum = 1e7
        for i in range(1, len(nums)):
            if leftSide[i] < nums[i] and rightSide[i] < nums[i]:
                minSum = min(minSum, leftSide[i] + nums[i] + rightSide[i])

        if minSum == 1e7:
            return -1
        return minSum
