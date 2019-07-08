//https://practice.geeksforgeeks.org/problems/minimum-element-in-bst/1
int minValue(Node* root)
{
    // Code here
    struct Node* prev;
    while(root!=NULL){
        prev = root;
        root = root->left;
    }
    return prev->data;
}
