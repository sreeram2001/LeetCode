class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> op = nums;
        unordered_map<int ,int> freq;
        sort(op.begin(), op.end());

        for(int i=0;i<op.size();i++)
        {
            int currNum = op[i];
            int count = 0;

            for(int j=0;j<=i;j++)
            {
                if(currNum > op[j]) count++;
            }

            freq[currNum] = count;
        }

        for(int i=0;i<nums.size();i++)
        {
            op[i] = freq[nums[i]];
        }
        
        return op;
    }
};