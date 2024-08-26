class Solution {
    List<Integer>n=new ArrayList<>();
    void p(Node root){
        if(root ==null)
        return;
        for(Node c:root.children){
            p(c);
            n.add(c.val);
        }
    }
    public List<Integer> postorder(Node root) {
        if(root==null)
        return n;
        p(root);
        n.add(root.val);
        return n;
    }
}