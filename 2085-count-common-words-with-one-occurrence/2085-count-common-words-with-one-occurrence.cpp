class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        
        map<string, int> mp1;
        map<string, int> mp2;

        for(int i=0;i<words1.size();i++)
        {
            mp1[words1[i]]++;
        }

        for(int i=0;i<words2.size();i++)
        {
            mp2[words2[i]]++;
        }

        int counter = 0;
        for(auto const& [w, c] : mp1)
        {
            if(c == 1 && mp2[w] == 1) counter++;
        }

        return counter;
    }
};