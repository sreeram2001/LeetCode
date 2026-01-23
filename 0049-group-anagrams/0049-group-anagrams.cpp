class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> op;
        unordered_map<string, vector<string>> mp;

        for(int i=0;i<strs.size();i++)
        {
            string currStr = strs[i];
            sort(currStr.begin(), currStr.end());
            
            mp[currStr].push_back(strs[i]);
        }

        for(auto it:mp)
        {
            op.push_back(it.second);
        }

        return op;
    }
};