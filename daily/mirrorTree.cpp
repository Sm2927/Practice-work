//https://practice.geeksforgeeks.org/problems/mirror-tree/1
void mirror(Node* node) 
{


    if(node == NULL) {return;}
    struct Node* tmp;
    mirror(node -> left);
    mirror(node -> right);
    tmp = node -> left;
    node -> left = node -> right;
    node -> right = tmp;
}
