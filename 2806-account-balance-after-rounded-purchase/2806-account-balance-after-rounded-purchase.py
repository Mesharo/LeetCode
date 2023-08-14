class Solution:
    def accountBalanceAfterPurchase(self, purchaseAmount: int) -> int:
        balance = 100 - purchaseAmount
        rest = balance % 10
        if rest < 6:
            return (balance - rest)
        else:
            return( balance + (10 - rest))
        