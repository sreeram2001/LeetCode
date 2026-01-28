class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {

        long long totalSubsequence = 0;
        multiset<int> multi;
        int l = 0;

        for(int r=0;r<nums.size();r++)
        {
            multi.insert(nums[r]);

            while(*multi.rbegin() - *multi.begin() > 2)
            {
                multi.erase(multi.find(nums[l]));
                l++;
            }

            totalSubsequence += r-l+1;
        }

        return totalSubsequence;
    }
};