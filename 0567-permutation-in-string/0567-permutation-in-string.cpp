class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        if(s1.size() > s2.size()) return false;
        
        unordered_map<char, int> freqS1;
        unordered_map<char, int> freqS2;

        //fixed sliding window
        for(int i=0;i<s1.size();i++)
        {
            freqS1[s1[i]]++;
            freqS2[s2[i]]++;
        }

        if(freqS1 == freqS2) return true;

        //slide thru the fixed window
        int start = 0;
        for(int end=s1.size(); end<s2.size(); end++)
        {
            freqS2[s2[start]]--;
            freqS2[s2[end]]++;

            if(freqS2[s2[start]] == 0) freqS2.erase(s2[start]);
            start++;

            if(freqS1 == freqS2) return true;
        }

        return false;
    }
};