class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> freq;
        int maxLength = 0;
        int start=0,end=0;

        while(end < fruits.size())
        {
            freq[fruits[end]]++;
            
            while(freq.size() > 2)
            {
                freq[fruits[start]]--;
                if( freq[fruits[start]] == 0 )
                {freq.erase(fruits[start]);}
                start++;
            }
            
            maxLength = max(maxLength, end-start+1);
            end++;
        }
        
        return maxLength;
    }   
};