class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char, int> freq;
        int start=0,length=0;

        for(int end=0;end<s.size();end++)
        {
            freq[s[end]]++;
        
            while( freq[s[end]] > 1)
            {
                freq[s[start]]--;
                start++;
            }

            length = max(length,end-start+1);
        }

        return length;
    }

};