
//https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1/?ref=self
void traverse(map<int, int>& m, int d, Node* r){
    if(r == NULL){return;}
    auto i = m.find(d);
    if(i == m.end())
    {m[d] = r->data;}
    traverse(m,d+1,r->left);
    traverse(m,d+1,r->right);
}
void leftView(Node *root)
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
