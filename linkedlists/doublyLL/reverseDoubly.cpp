#include<bits/stdc++.h>
using namespace std;
//the structure of each node in the linked list
struct Node{
    int data;
    Node* next;
    Node* prev;
}*start;

//adding a new Node to the linked list at the last
void createList(int val){
    struct Node* temp;
    struct Node* newNode = new Node();
    newNode ->data = val;
    
    if(start == NULL){
        newNode->prev = NULL;
        newNode->data = val;
        start = newNode;
    }
    else{
        temp = start;
        while(temp->next != NULL){
            temp = temp->next;
        }
        newNode->prev = temp;
        //newNode->next = NULL;
        temp->next = newNode;
    }
}
//displaying the list
void dis(){
    if(start == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    struct Node* n;
    n= start;
    while(n != NULL){
        cout<<n->data<<endl;
        n = n->next;
    }
}
//reversing the linked list by swapping prev and next pointers
void rev(){
    if(start == NULL){
        return;
    }
   struct Node *p1,*p2;
   p1= start;
   p2 = p1->next;
   p1->next = NULL;
   p1->prev = p2;
   while(p2!=NULL){
       p2->prev = p2->next;
       p2->next = p1;
       p1=p2;
       p2 = p2->prev;
   }
   start = p1;
    
}


int main(){
    int n,d;
    cin>>n;
    while(n--){
        cin>>d;
        createList(d);
    }
    dis();
    rev();
    dis();
    
    return 0;
}
