class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        
        string comb = s1 + " " + s2;
        unordered_map<string, int> freq;
        vector<string> op;

        string curr = "";
        for( char c : comb)
        {
            if(c == ' ')
            {
                if( !curr.empty()) freq[curr]++;
                curr = "";
            }
            else
            {
                curr += c;
            }
        }

        if(!curr.empty()) freq[curr]++;

        for(auto it:freq)
        {
            if(it.second == 1)
            {
                op.push_back(it.first);
            }
        } 

        return op;
    }
};