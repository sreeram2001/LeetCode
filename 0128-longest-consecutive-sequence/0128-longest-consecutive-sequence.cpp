class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        unordered_set<int> st;
        int maxConsec = 0;

        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }

        for(int number: st)
        {
            if(!st.contains(number - 1))
            {
                int currNum = number;
                int currCount = 1;

                while(st.contains(currNum + 1))
                {
                    currNum = currNum + 1;
                    currCount += 1;
                }

                maxConsec = max(currCount, maxConsec);
            }

            
        }

        return maxConsec;
    }
};