# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumNumbers(self, root: Optional[TreeNode]) -> int:
        ans=0
        def calc(curr,currsum):
            nonlocal ans
            if curr is None:
                return
            if curr.left is None and curr.right is None:
                currsum=currsum*10+curr.val
                ans+=currsum
                currsum=0
            else:
                currsum=currsum*10+curr.val
                calc(curr.left,currsum)
                calc(curr.right,currsum)
            
        calc(root,0)
        return ans