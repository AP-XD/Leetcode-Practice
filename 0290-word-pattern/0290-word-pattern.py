class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        k=s.split(' ')
        if(len(k) != len(pattern)):
            return False
        z={}
        z2={}
        s2=""
        for i in range(len(k)):
            z[k[i]]=pattern[i]
        for i in k:
            s2+=z[i]
        p=""
        for i in range(len(k)):
            z2[pattern[i]]=k[i]
        for i in pattern:
            p+=z2[i]+" "
        print(p)
        if s2==pattern and p.strip()==s:
            return True
        else:
            return False