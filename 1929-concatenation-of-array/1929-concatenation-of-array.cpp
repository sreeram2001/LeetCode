class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> op;
        int n = nums.size();

        for(int i=0;i<2*nums.size();i++)
        {
            op.push_back(nums[i%n]);
        }

        return op;
    }
};