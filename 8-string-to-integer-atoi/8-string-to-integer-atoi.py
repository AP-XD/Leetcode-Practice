class Solution:
    def myAtoi(self, s: str) -> int:
        s, result = s.strip(), ''
        if s == '': return 0
        elif s[0] == '-': 
            result += '-'
            s = s[1:]
        elif s[0] == '+': 
            result += '+'
            s = s[1:]
        for dig in s:
            if dig.isnumeric(): result += dig
            else: break
        result = '0' if result in ['+','-',''] else result
        return max(int(result), - (2**31)) if int(result) < 0 else min(int(result), (2**31 - 1))