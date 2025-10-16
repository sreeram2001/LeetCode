class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {

        vector<pair<int, int>> indexNum;

        for(int i=0;i<nums.size();i++)
        {
            indexNum.push_back({nums[i], i});
        }
        
        //sort the values in descending order
        sort(indexNum.begin(), indexNum.end(), [](const auto& a, const auto& b){
            return a.first > b.first;
        });

        vector<pair<int, int>> kNums;
        kNums.assign(indexNum.begin(), indexNum.begin()+k);

        //sort this based on their index
        sort(kNums.begin(), kNums.end(), [](const auto& a, const auto& b){
            return a.second < b.second;
        });

        vector<int> op;
        for(int i=0;i<kNums.size();i++)
        {
            op.push_back(kNums[i].first);
        }

        return op;
    }
};