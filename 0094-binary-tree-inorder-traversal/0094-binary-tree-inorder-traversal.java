/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> op = new ArrayList<>();
        traversal(root, op);
        return op;
    }

    private void traversal(TreeNode root, List<Integer> op)
    {
        if(root == null) return;
        traversal( root.left, op);
        op.add(root.val);
        traversal( root.right, op);
    }


}