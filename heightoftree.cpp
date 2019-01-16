#include <iostream>
#include <cstddef>

using namespace std;	

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
        
		int getHeight(Node* root){
          //Write your code here
         
          if (root== NULL){
              return -1;
          }
          int ml = getHeight(root->left);
          int mr = getHeight(root->right);
          
          return (ml>mr?ml:mr) + 1;
          

        }

}; //End of Solution
