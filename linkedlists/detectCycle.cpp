//https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle/problem


bool has_cycle(SinglyLinkedListNode* head) {
    if(head == NULL){
        return false;
    }
    SinglyLinkedListNode* now = head;
    auto after = head;
    while(after != NULL && after->next != NULL){
        now = now->next;
        after = after->next->next;
        if(now == after){
        return true;
    }
    }
    
    return false;


}
