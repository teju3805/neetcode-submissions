class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        buy=prices[0]
        profit=0
        for price in prices:
            if price<buy:
                buy=price
            currentProfit=price-buy
            if currentProfit>profit:
                profit=currentProfit
        return profit

        