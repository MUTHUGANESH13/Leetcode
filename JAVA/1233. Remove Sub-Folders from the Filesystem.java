class Solution {
    public List<String> removeSubfolders(String[] f) {
        Arrays.sort(f);
        List<String>r=new ArrayList<>();
        r.add(f[0]);
        for(int i=1;i<f.length;i++){
            String a=r.get(r.size()-1);
            a+='/';
            if(!f[i].startsWith(a))
            r.add(f[i]);
        }
        return r;
    }
}