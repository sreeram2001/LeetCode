class Solution {
public:
    int minPairSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int l=0, r=nums.size()-1;
        vector<int> pairs;

        while(l <= r)
        {
            pairs.push_back(nums[l] + nums[r]);
            l++;
            r--;
        }

        return *max_element(pairs.begin(), pairs.end());
    }
};