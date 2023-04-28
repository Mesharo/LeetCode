class Solution:
    def climbStairs(self, n: int) -> int:
        if n in (1,2):
            return n
        result = [1,2]
        for x in range(3, n + 1):
            result.append(result[x - 2] + result[x - 3])
        return(result[n - 1])