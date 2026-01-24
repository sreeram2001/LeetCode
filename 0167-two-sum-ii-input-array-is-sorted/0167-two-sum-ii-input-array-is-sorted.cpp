class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int l=0, r=numbers.size()-1;
        vector<int> op;

        while(l <= r)
        {
            if(numbers[l] + numbers[r] == target)
            {
                op.push_back(l+1);
                op.push_back(r+1);
                return op;
            }
            else if(numbers[l] + numbers[r] < target)
            {
                l++;
            }
            else
            {
                r--;
            }
        }

        return op;
    }
};