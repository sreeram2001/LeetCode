class Solution {
public:
    string longestPalindrome(string s) {
        string maxi = "";
        string curr = "";

        for(int i=0;i<s.size();i++)
        {
            int l = i;
            int r = i;
            curr.clear();
            
            while(l >= 0 && r < s.size() && s[l] == s[r])
            {
                if(l==r)
                {curr = curr + s[l];}
                else
                {
                    curr = s[l] + curr + s[r];
                }
                l--;
                r++;
            }

            if(maxi.size() < curr.size())
            {
                maxi = curr;
            }

            l = i;
            r = i+1;
            curr.clear();

            while(l >= 0 && r < s.size() && s[l] == s[r])
            {
                if(l==r)
                {curr = curr + s[l];}
                else
                {
                    curr = s[l] + curr + s[r];
                }
                l--;
                r++;
            }

            if(maxi.size() < curr.size())
            {
                maxi = curr;
            }
        }

        return maxi;
    }
};