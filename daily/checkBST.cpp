
//https://practice.geeksforgeeks.org/problems/check-for-bst/1/?ref=self

void inorder(Node* root, vector<int>& d){
    
    if(root== NULL){return;}
        inorder(root->left,d);
        d.push_back(root->data);
        // cout<<root->data<<endl;
        inorder(root->right,d);
    
    
}
bool isBST(Node* root) {
    // Your code here
    vector<int> d;
    inorder(root,d);
    vector<int> c(d);
    sort(d.begin(),d.end());
    
    if(d == c){return true;}
    else{return false;}
   
}
