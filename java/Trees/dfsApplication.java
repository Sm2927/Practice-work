//https://leetcode.com/problems/binary-tree-paths/submissions/

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    public void dfs(TreeNode root,ArrayList<ArrayList<String>> paths,
                            ArrayList<String> s ) {
                
               s.add(String.valueOf(root.val));
                if(root.left==null && root.right==null){
                    paths.add(s);
                    return;
                }
        if(root.left!=null){
            ArrayList<String> tmp = new ArrayList<String>(s);
            dfs(root.left, paths, tmp);
        }
        if(root.right!=null){
            ArrayList<String> tmp = new ArrayList<String>(s);
            dfs(root.right, paths, tmp);
        }
                
        
       
    }
    public List<String> binaryTreePaths(TreeNode root) {
        
        ArrayList<String> sol = new ArrayList<>();
        if(root==null){return sol;}
                ArrayList<String> s = new ArrayList<>();

        ArrayList<ArrayList<String>> paths = new ArrayList<ArrayList<String>>();
        dfs(root,paths,s);
       for(ArrayList<String> al : paths){
           StringBuilder sb = new StringBuilder();
           sb.append(al.get(0));
           for(int i=1; i<al.size();i++){
               sb.append("->"+al.get(i));
           }
            sol.add(sb.toString());
}

        return sol;
        
    }
}
