class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        first, second = [], []
        
        for x in s:
            first.append(s.index(x))
        for x in t:
            second.append(t.index(x))

        return True if (first == second) else False