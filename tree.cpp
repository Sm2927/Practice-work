#include <iostream>
using namespace std;


struct node{
	 int data;
	 struct node* left; //pointing to similar type of data
     struct node* right;
	};
struct node* newNode(int data){
    struct node* node = new struct node; //creating a new via dynamiv memory allocation
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
    
}
int main() {
    struct node* root = newNode(9);
    root->left = newNode(8);
    (*root).right = newNode(3);//same as root->right = newNode(3);
    root->left->left = newNode(7);
	cout<<root->left->left->data<<endl;
	return 0;
}
