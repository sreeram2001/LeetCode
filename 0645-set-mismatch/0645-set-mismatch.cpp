class Solution {
public:

vector<int> findErrorNums(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int, int> freq;
    int duplicate = -1, missing = -1;

    for (int i : nums) freq[i]++;

    for (int i = 1; i <= n; i++) {
        if (freq[i] == 2) duplicate = i;
        else if (freq[i] == 0) missing = i;
    }

    return {duplicate, missing};
}

};