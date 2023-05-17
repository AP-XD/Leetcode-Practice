class Solution:
    def areAlmostEqual(self, s1: str, s2: str) -> bool:
        c=0
        i1=i2=0
        sum=0
        for i in range(len(s1)):
            if s1[i]!=s2[i]:
                if not i1:
                    i1=i
                else:
                    i2=i
                c+=1
        print(i1,i2)
        return (c==0 or c==2) and s1[i1]==s2[i2] and s1[i2]==s2[i1]
            