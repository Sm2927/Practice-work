//https://practice.geeksforgeeks.org/problems/circular-linked-list/1
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list Node 
struct Node {
    int data;
    Node* next;
}; */
/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
   // Your code here
   if(head == NULL){
       return true;
   }
   bool flg=false;
   
   struct Node* newNode = new Node();
   newNode = head;
   
   while(newNode != NULL){
       if(newNode->next == head){
           flg = true;
           break;
       }
       else{
           newNode = newNode->next;
       }
   }
   return flg;
   
}
