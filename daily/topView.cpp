//https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1/?ref=self

void topView(Node *root)
{
    // Your code here
    if(root == NULL){
       return;
   }
   set<int> m;
   queue<pair<Node*, int>> q;
   int v,d = 0;
   struct Node* t;
   q.push(make_pair(root,d));
   while(!q.empty()){
       pair<Node*, int> p = q.front();
       q.pop();
       t = p.first;
       v= p.second;
       auto i = m.find(v);
       if(i==m.end()){
           cout<<t->data<<" ";
           m.insert(v);
       }
       if(t->left != NULL){ q.push(make_pair(t->left,v-1));}
       if(t->right != NULL){q.push(make_pair(t->right,v+1));}
   }
   
   
}
