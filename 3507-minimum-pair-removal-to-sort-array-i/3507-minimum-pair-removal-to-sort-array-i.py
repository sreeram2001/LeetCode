class Solution:
    def minimumPairRemoval(self, nums: List[int]) -> int:
        
        totalCount = 0

        while len(nums) > 1:
            miniSum = float("inf")
            changeIndex = -1
            ascending = True

            for i in range(len(nums)-1):
                currminiSum = nums[i] + nums[i+1]

                if(currminiSum < miniSum):
                    miniSum = currminiSum
                    changeIndex = i

                if nums[i] > nums[i+1]:
                    ascending = False

            if ascending == True:
                break

            nums[changeIndex] = miniSum
            nums.pop(changeIndex + 1)
            totalCount += 1

        return totalCount

        

            


                


