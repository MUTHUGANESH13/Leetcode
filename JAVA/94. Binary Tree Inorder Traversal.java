class Solution {
    List<Integer>n=new ArrayList<>();
    public List<Integer> inorderTraversal(TreeNode root) {
        if(root==null)
        return n;
        inorderTraversal(root.left);
        n.add(root.val);
        inorderTraversal(root.right);
        return n;
    }
}