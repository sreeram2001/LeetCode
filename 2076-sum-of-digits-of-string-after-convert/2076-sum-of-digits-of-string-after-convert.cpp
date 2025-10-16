class Solution {
public:
    int getLucky(string s, int k) {
        
        int ch = s[0];
        string str = "";

        for(int i=0;i<s.size();i++){
            str = str + to_string(s[i] - 'a' + 1);
        }

        int strSum;
        while(k > 0)
        {
            strSum = 0;

            for(int i=0;i<str.size();i++)
            {
                strSum += str[i] - '0';
            }

            str = to_string(strSum);
            k--;
        }

        return strSum;
    }
};