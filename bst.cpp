//binary search tree
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
int main() {
    node* root = NULL;
    int n,num;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        insert(root,num);
        
    }
     
       cout<<root->left->data;
        
    
    
	return 0;
}
