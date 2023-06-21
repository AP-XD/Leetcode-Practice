#User function Template for python3
import copy
class Solution:
    def findSequences(self, startWord, targetWord, wordList):
        #Code here
        wordlist=set(wordList)
        vec=[]
        q=[]
        ans=[]
        usedlevel=[]
        level=0
        q.append([startWord])
        usedlevel.append(startWord)
        while q:
            # print(q)
            vec=q.pop(0)
            
            if len(vec)>level:
                level+=1
                for i in usedlevel:
                    if i in wordlist:
                        wordlist.remove(i)
                usedlevel.clear()
            word=vec[-1]
            # print(vec)
            if word==targetWord:
                # print(1)
                if not ans:
                    ans.append(vec)
                elif len(ans[0])==len(vec):
                    ans.append(vec)
            oword=word
            for i in range(len(word)):
                # print(vec)
                for ch in "abcdefghijklmnopqrstuvwxyz":
                    w=word[:i]+ch+word[i+1:]
                    # print(w)
                    if w in wordlist:
                        vec2=copy.deepcopy(vec)
                        vec2.append(w)
                        q.append(vec2)
                        # print(q)
                        usedlevel.append(w)
                        
                word=oword
        return ans
#{ 
 # Driver Code Starts
from collections import deque 
import functools

def comp(a, b):
    x = ""
    y = ""
    for i in a:
        x += i 
    for i in b:
        y += i
    if x>y:
        return 1
    elif y>x:
        return -1 
    else:
        return 0

if __name__ == '__main__':
    T=int(input())
    for tt in range(T):
        n = int(input())
        wordList = []
        for i in range(n):
            wordList.append(input().strip())
        startWord = input().strip()
        targetWord = input().strip()
        obj = Solution()
        ans = obj.findSequences(startWord, targetWord, wordList)
        if len(ans)==0:
            print(-1)
        else:
            ans = sorted(ans, key=functools.cmp_to_key(comp))
            for i in range(len(ans)):
                for j in range(len(ans[i])):
                    print(ans[i][j],end=" ")
                print()

# } Driver Code Ends