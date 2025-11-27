class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start = 0;
        int currSum = 0;
        int length = INT_MAX;

        for(int end=0;end<nums.size();end++)
        {
            currSum = currSum + nums[end];

            while(currSum >= target)
            {
                length = min(length, end-start+1);
                currSum = currSum - nums[start];
                start++;
            }
        }

        return length == INT_MAX ? 0 : length;
    }
};