class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        result = 0
        for x in jewels:
            result += stones.count(x)
        return result
        