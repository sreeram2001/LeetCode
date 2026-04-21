class Solution:
    def maxArea(self, height: List[int]) -> int:
        l = 0
        r = len(height)-1
        width = 0
        maxVal = 0
        ht = 0

        while l < r:
            width = r - l
            ht = min(height[l], height[r])
            maxVal = max(maxVal, width*ht)

            if height[l] < height[r]:
                l += 1
            else:
                r -= 1
        
        return maxVal
            


        
        