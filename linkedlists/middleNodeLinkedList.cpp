//https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1/?ref=self
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list Node 
struct Node {
    int data;
    Node* next;
}; */
/* Should return data of middle node. If linked list is empty, the
n  -1*/
#include<bits/stdc++.h>
int getMiddle(Node *head)
{
   // Your code here
   struct Node* newNode = new Node();
   newNode = head;
   int cnt = 0;
   multimap<int, int> mp;
   while(newNode != NULL){
      mp.insert({cnt, newNode->data});
      cnt++;
      newNode = newNode->next;
      
   }
   if(cnt == 0){
       return -1;
   }
   multimap<int,int>::iterator i;
  
   
   i = mp.find(cnt/2);
   return i->second;
   
}
