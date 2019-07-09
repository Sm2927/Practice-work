//https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1/?ref=self
void traverse(map<int, int>& m, int d, Node* r){
    if(r == NULL){return;}
    m[d] = r->data;
    traverse(m,d+1,r->left);
    traverse(m,d+1,r->right);
}
void rightView(Node *root)
{
   // Your Code here
   if(root == NULL){
       return;
   }
   map<int, int> m;
   traverse(m,0,root);
   for(auto x: m){
       cout<<x.second<<" ";
   }
}
