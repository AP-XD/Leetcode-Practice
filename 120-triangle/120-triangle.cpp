class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        for(int level = triangle.size() - 2; level >= 0; level--) // start from bottom-1 level
		for(int i = 0; i <= level; i++)
			triangle[level][i] += min(triangle[level + 1][i], triangle[level + 1][i + 1]);
	    return triangle[0][0];
    }
};