class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        if(prices.size()==1) return prices;

        vector<int> discount = prices;
        stack<int> st;

        for(int i=0;i<prices.size();i++)
        {
            while(!st.empty() && prices[st.top()] >= prices[i])
            {
                discount[st.top()] -= prices[i];
                st.pop();
            }

            st.push(i);
        }

        return discount;
    }
};