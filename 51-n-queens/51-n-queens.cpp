class Solution {
public:
    bool safe(vector<string> board,int row,int col,int n)
    {
        int cpr=row,cpc=col;
        while(col>=0)
        {
            if(board[row][col]=='Q')
                return false;
            col--;
        }
        row=cpr;
        col=cpc;
        while(row<n && col>=0)
        {
            if(board[row][col]=='Q')
                return false;
            row++;
            col--;
        }
        row=cpr;
        col=cpc;
        while(row>=0 && col>=0)
        {
            if(board[row][col]=='Q')
                return false;
            row--;
            col--;
        }
        return true;
    }
    void solve(vector<string>& board,vector<vector<string>>& ans,int col,int n)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        for(int i=0;i<n;i++)
        {
             
            if(safe(board,i,col,n))
            { board[i][col]='Q';
            solve(board,ans,col+1,n);
            board[i][col]='.';}
        
        }
        
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
       solve(board,ans,0,n);
    return ans;
    }
};