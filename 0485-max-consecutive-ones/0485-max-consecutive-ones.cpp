class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int maxCount = 0;
        int curr = 0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == 1)
            {
                curr += 1;
            }
            else
            {
                maxCount = max(maxCount, curr);
                curr = 0;
            }

            maxCount = max(maxCount, curr);
        }

        return maxCount;
    }
};