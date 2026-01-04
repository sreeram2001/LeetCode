class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:

        for i in range(len(nums)):
            ind = abs(nums[i]) - 1

            if nums[ind] > 0:
                nums[ind] = nums[ind]*(-1)

        op = []
        for i in range(len(nums)):
            if nums[i] > 0:
                op.append(i+1)

        return op

        
        
