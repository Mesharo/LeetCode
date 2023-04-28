class Solution:
    def climbStairs(self, n: int) -> int:
        result = [1,2]
        for x in range(3, n + 1):
            result.append(result[x - 2] + result[x - 3])
        return(result[n - 1])