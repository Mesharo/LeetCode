class Solution:
    def finalString(self, s: str) -> str:
        res = ""
        
        for x in s:
            if x == 'i':
                res = res[::-1]
                continue
            res += x
            
        return res