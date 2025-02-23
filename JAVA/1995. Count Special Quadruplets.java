class Solution {
    public int countQuadruplets(int[] n) {
        int s=0;
        for(int i=0;i<n.length;i++){
            for(int j=i+1;j<n.length;j++){
                for(int k=j+1;k<n.length;k++){
                    for(int l=k+1;l<n.length;l++){
                        if(n[i]+n[j]+n[k]==n[l])
                        s++;
                    }
                }
            }
        }
        return s;
    }
}