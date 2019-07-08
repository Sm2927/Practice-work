
//https://practice.geeksforgeeks.org/problems/predecessor-and-successor/1/?ref=self

void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    while(root!= NULL){
        
        //if key exists in the tree
        if(root->key == key){
            if(root->right != NULL){
                struct Node* tmp = root->right;
                while(tmp->left != NULL){
                    tmp = tmp->left;
                }
                suc = tmp;
            }
            
            if(root->left != NULL){
                struct Node* tmp = root->left;
                while(tmp->right != NULL){
                    tmp = tmp->right;
                }
                pre = tmp;
            }
            break;//end the while loop as the job is done
        }
        
        //if key doesn't exist in the BST
        else if(key < root->key){
            suc = root;
            root = root->left;
        }
        else{
            pre = root;
            root = root->right;
        }
        
        
    }
}
