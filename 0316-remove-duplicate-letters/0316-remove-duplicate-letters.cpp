class Solution {
public:
    string removeDuplicateLetters(string s) {
        
        unordered_map<char, int> freq;
        vector<bool> visited(26, false);
        stack<char> st;

        for(char c:s)
        {
            freq[c]++;
        }

        for(char c:s)
        {
            freq[c]--;

            if(visited[c - 'a']) continue;

            while(!st.empty() && c < st.top() && freq[st.top()])
            {
                visited[st.top() - 'a'] = false;
                st.pop();
            }

            st.push(c);
            visited[c - 'a'] = true;
        }

        string op = "";
        while(!st.empty())
        {
            op = st.top() + op;
            st.pop();
        }

        return op;
    }
};