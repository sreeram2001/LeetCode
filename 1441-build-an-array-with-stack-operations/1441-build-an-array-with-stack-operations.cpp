class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        
        vector<string> st;

        for(int i=1;i<n+1;i++)
        {
            

            if(count(target.begin(), target.end(), i))
            {
                st.push_back("Push");
            }
            else
            {
                st.push_back("Push");
                st.push_back("Pop");
            }

            if(i == target[target.size()-1]) break;
        }

        return st;
    }
};