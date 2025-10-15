class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:

        mapp = {}

        for i in range(len(nums)):
            if nums[i] not in mapp:
                mapp[nums[i]] = i
            else:
                if abs(i - mapp[nums[i]]) <= k:
                    return True
                
                mapp[nums[i]] = i

        return False

