class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        dict = {}

        for i in range(len(nums)):
            bal = target - nums[i]

            if bal in dict:
                return [i, dict[bal]]
            else:
                if nums[i] not in dict:
                    dict[nums[i]] = i
        
        return []
