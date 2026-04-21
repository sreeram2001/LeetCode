class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        set<int> vis;

        for(int i=0;i<nums.size();i++)
        {
            if(vis.count(nums[i]))
            {
                return true;
            }

            vis.insert(nums[i]);

            if(vis.size() > k)
            {
                vis.erase(nums[i-k]);
            }
        }

        return false;
    }
};