//https://practice.geeksforgeeks.org/problems/leaf-at-same-level/1/?ref=self
bool trav(Node* r, int d, int& lf){
    if( r== NULL){return true;}
    if(r->left == NULL && r->right == NULL){
        if(lf == -1){lf = d;}
    if(lf != d){return false;} 
    else{return true;}}
    return trav(r->left,d+1,lf) && trav(r->right,d+1,lf);
}
bool check(Node *root)
{
    //Your code here
    if(root == NULL){return true;} 
    int lf = -1;
    return trav(root,0,lf);
}
