class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, newColor: int) -> List[List[int]]:
        ans=image
        n=len(image)
        m=len(image[0])
        init=image[sr][sc]
        def dfs(r,c,newColor,init,ans):
            ans[r][c]=newColor
            dr=[-1,0,1,0]
            dc=[0,1,0,-1]
            for i in range(4):
                nr=r+dr[i]
                nc=c+dc[i]
                if nr>=0 and nc>=0 and nr<n and nc<m and image[nr][nc]==init and ans[nr][nc]!=newColor:
                    dfs(nr,nc,newColor,init,ans)
        dfs(sr,sc,newColor,init,ans)
        return ans
