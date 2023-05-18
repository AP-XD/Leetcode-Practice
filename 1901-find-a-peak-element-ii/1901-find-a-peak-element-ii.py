class Solution:
    def findPeakGrid(self, mat: List[List[int]]) -> List[int]:
        top=0
        bot=len(mat)-1
        
        while top<bot:
            mid=(top+bot)//2
            
            if max(mat[mid])>max(mat[mid+1]):
                bot=mid
            else:
                top=mid+1
        return [bot,mat[bot].index(max(mat[bot]))]