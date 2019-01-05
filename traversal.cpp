//display inorder, preorder, postorder in a binary search tree
#include <iostream>
using namespace std;


struct node{
	 int data;
	 struct node* left; //pointing to similar type of data
     struct node* right;
	};
struct node* createNode(int data){
    struct node* node = new struct node; //creating a new via dynamiv memory allocation
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
    
}
void insert(node* &root, int n){//*& is not a single symbol but a combination of * and &. * is for the pointer and & is for reference so that the function can change the value 
    if(root==NULL){
        root=createNode(n);
    }
    else if(root->data > n){
        insert(root->left, n);
    }
    else{
        insert(root->right, n);
       
    }
} 
void displayIn(node* root)//since we just are displaying it, no refrence required
{
    if(root!= NULL){
         displayIn(root->left);  //left child
        cout<<root->data<<" ";   //parent
       
        displayIn(root->right);   //right child
    }
}
void displayPre(node* root)//since we just are displaying it, no refrence required
{
    if(root!= NULL){
        cout<<root->data<<" ";   //parent
        displayPre(root->left);  //left child
        displayPre(root->right);   //right child
    }
}

void displayPost(node* root)//since we just are displaying it, no refrence required
{
    if(root!= NULL){
         displayPost(root->left);  //left child
          displayPost(root->right);   //right child
        cout<<root->data<<" ";   //parent
       
       
    }
}
//inorder traversal of a bst gives sorted value
int main() {
    node* root = NULL;
    int n,num;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        insert(root,num);
        
    }
     
       displayIn(root);
       cout<<endl;
       displayPre(root);
       cout<<endl;
       displayPost(root);
        
    
    
	return 0;
}
