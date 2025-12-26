class Solution {
public:
    string smallestSubsequence(string s) {
        
        unordered_map<char, int> freq;
        vector<bool> visited(26, false);
        string op = ""; //will be used as a stack

        //count the frequencies of letters to check if they occur again in string
        for(char c:s)
        {
            freq[c]++;
        }

        for(char c:s)
        {
            //reduce the freq as we iterate
            freq[c]--;

            //if its visited letter, skip as it is part of output vector
            if(visited[c-'a']) continue;

            //if curr letter is smaller than output top element
            while(!op.empty() && c < op.back() && freq[op.back()])
            {
                visited[op.back() - 'a'] = false;
                op.pop_back();
            }

            op.push_back(c);
            visited[c-'a'] = true;

        }

        return op;
    }
};