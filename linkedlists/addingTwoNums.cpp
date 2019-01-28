/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 //https://leetcode.com/problems/add-two-numbers/submissions/
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(0),*curr1=l1,*curr2=l2;
        ListNode* working = l3;
        int p,r=0;
       
        while(curr1 || curr2){
            
           if(curr1){
               r  += curr1->val;
               curr1 = curr1->next;
           }
            if(curr2){
                r += curr2->val;
                curr2 = curr2->next;
            }
            l3->val = r%10;
            r /= 10;
            if(curr1||curr2||r){
                l3->next = new ListNode(r);
                l3 = l3->next;
            }
        }
        return working;
        
    }
};
