class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        map<int,int>mpr;
        map<int,int>mpc;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {mpr[i]=1;mpc[j]=1;}
                
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mpr[i]==1)
                    matrix[i][j]=0;
                 if(mpc[j]==1)
                    matrix[i][j]=0;
            }
        }
        
        
        
    }
};