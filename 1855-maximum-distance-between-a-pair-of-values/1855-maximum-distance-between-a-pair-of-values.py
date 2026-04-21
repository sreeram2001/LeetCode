class Solution:
    def maxDistance(self, nums1: List[int], nums2: List[int]) -> int:
        l = 0
        r = 0
        maxDist = 0

        while l < len(nums1) and r < len(nums2):
            if nums1[l] <= nums2[r]:
                maxDist = max(maxDist, r-l)
                r += 1
            else:
                l += 1

        return maxDist