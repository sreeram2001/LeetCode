class Solution:
    def maxProfit(self, prices: List[int]) -> int:

        minsoFar = prices[0]
        profit = 0

        for i in range(len(prices)):

            profit = max(profit, prices[i] - minsoFar)

            minsoFar = min(minsoFar, prices[i])


        return profit

        