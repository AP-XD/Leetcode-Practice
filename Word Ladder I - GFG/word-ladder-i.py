class Solution:
	def wordLadderLength(self, startWord, targetWord, wordList):
		#Code here
		q=[]
		q.append([startWord,1])
		if startWord in wordList:
            wordList.remove(startWord)
        
        while q:
            word,steps=q.pop(0)
            if word==targetWord:
                return steps
            for i in range(len(word)):
                oword=word
                for ch in "abcdefghijklmnopqrstuvwxyz":
                    word=word[:i]+ch+word[i+1:]
                    if word in wordList:
                        q.append([word,steps+1])
                        wordList.remove(word)
                word=oword
            
        return 0
#{ 
 # Driver Code Starts
# from collections import deque 
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
		ans = obj.wordLadderLength(startWord, targetWord, wordList)
		print(ans)

# } Driver Code Ends