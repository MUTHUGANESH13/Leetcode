class Solution {
    List<Integer>n=new ArrayList<>();
    void p(Node root){
        if(root==null)
        return ;
        n.add(root.val);
        for(Node c:root.children){
            p(c);
        }
    }
    public List<Integer> preorder(Node root) {
        if(root==null)
        return n;
        p(root);
        return n;
    }
}