//https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1

void bottomView(Node *root)
{
   // Your Code Here
   if(root == NULL){
       return;
   }
   map<int, int> m;
   queue<pair<Node*, int>> q;
   int v,d = 0;
   struct Node* t;
   q.push(make_pair(root,d));
   while(!q.empty()){
       pair<Node*, int> p = q.front();
       q.pop();
       t = p.first;
       v= p.second;
       m[v] = t->data;
       if(t->left != NULL){q.push(make_pair(t->left,v-1));}
       if(t->right != NULL){q.push(make_pair(t->right,v+1));}
   }
   for(auto x : m){
       cout<<x.second<<" ";
   }
   
}
