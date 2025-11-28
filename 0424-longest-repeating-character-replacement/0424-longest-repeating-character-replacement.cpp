class Solution {
public:
    int characterReplacement(string s, int k) {
        int start = 0;
        int maxLength = 0;
        int maxFreq = 0;

        vector<int> freq(26, 0);

        for(int end=0;end<s.size();end++)
        {
            freq[s[end] - 'A']++;

            maxFreq = max(maxFreq, freq[s[end] - 'A']);

            if( (end-start+1) - maxFreq > k)
            {
                freq[s[start]-'A']--;
                start++;
            }

            maxLength = max(maxLength, end-start+1);
        }

        return maxLength;
    }
};