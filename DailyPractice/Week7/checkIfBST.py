
class Solution:

    # Function to check whether a Binary Tree is BST or not.
    val = float("-inf")

    def isBST(self, root):
        # code here
        if root is None:
            return True
        if self.isBST(root.left) is False:
            return False
        if root.data < self.val:
            return False
        else:
            self.val = root.data
        return self.isBST(root.right)
