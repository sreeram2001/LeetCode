class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        unordered_set<int> st;
        vector<int> op;

        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }

        for(int i=1;i<=nums.size();i++)
        {
            if(!st.contains(i))
            {
                op.push_back(i);
            }
        }

        return op;
    }
};