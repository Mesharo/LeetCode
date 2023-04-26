class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        count = 0
        for x in jewels:
            for y in stones:
                if x == y:
                    count += 1
        return count
            
#