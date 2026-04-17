class Solution {
    public int maxProfit(int[] prices) {
        
        int op = 0;
        int minInd = 0;
        int profit = 0;

        for(int i=0;i<prices.length;i++)
        {
            if(prices[i] < prices[minInd])
            {
                minInd = i;
            }

            profit = Math.max(profit, prices[i] - prices[minInd]);
        }

        return profit;
    }
}