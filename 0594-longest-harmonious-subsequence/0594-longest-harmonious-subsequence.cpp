class Solution {
public:
    int findLHS(vector<int>& nums) {
    
        sort(nums.begin(), nums.end());

        int l=0, r=0;
        int maxLength = 0;

        while(r < nums.size())
        {
            while(nums[r] - nums[l] > 1 && l < r)
            {
                l++;
            }

            if(nums[r] - nums[l] == 1)
            {
                maxLength = max(maxLength, r-l+1);
            }

            r++;
        }

        return maxLength;
    }
};