class Solution
{
    public:
        /*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;

    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }

    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }

    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

        Node* travel(vector<vector < int>> &grid, int x, int xmax, int y, int ymax)
        {
            if (x > xmax || y > ymax)
            {
                return nullptr;
            }
            bool isleaf = true;
            int val = grid[x][y];
            for (int i = x; i <= xmax; i++)
            {
                for (int j = y; j <= ymax; j++)
                {
                    if (val != grid[i][j])
                    {
                        isleaf = false;
                        break;
                    }
                }
                if (!isleaf)
                {
                    break;
                }
            }
            if (isleaf)
                return new Node(val, true);
            int midx = (x + xmax) / 2;
            int midy = (y + ymax) / 2;
            Node *topleft = travel(grid, x, midx, y, midy);
            Node *topright = travel(grid, x,midx, midy+1,ymax);
            Node *bottomleft = travel(grid, midx+1,xmax, y, midy);
            Node *bottomright = travel(grid, midx + 1, xmax, midy + 1, ymax);
            return new Node(false, false, topleft, topright, bottomleft, bottomright);
        }
    Node* construct(vector<vector < int>> &grid)
    {
        int n = grid.size();
        return travel(grid, 0, n - 1, 0, n - 1);
    }
};