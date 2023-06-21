class Solution:
    def ladderLength(self, bword: str, eword: str, wordList: List[str]) -> int:
        q=[]
        wordlist=set(wordList)
            
        q.append([bword,1])
        if bword in wordlist:
            wordlist.remove(bword)
        
        while q:
            word,s=q.pop(0)
            oword=word
            if word==eword:
                return s
            for i in range(len(word)):
                for ch in "abcdefghijklmnopqrtstuvwxyz":
                    w=word[:i]+ch+word[i+1:]
                    if w in wordlist:
                        q.append([w,s+1])
                        wordlist.remove(w)
                word=oword
        return 0
                    