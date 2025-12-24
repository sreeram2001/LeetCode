class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int, int> grt;
        stack<int> st;

        for(int i=0;i<nums2.size();i++)
        {
            while( !st.empty() && nums2[i] > st.top() )
            {
                grt[st.top()] = nums2[i];
                st.pop();
            }

            st.push(nums2[i]);
        }

        vector<int> op;
        for(int i=0;i<nums1.size();i++)
        {
            if( grt.contains(nums1[i]))
            {
                op.push_back(grt[nums1[i]]);
            }
            else
            {
                op.push_back(-1);
            }
        }

        return op;
    }
};