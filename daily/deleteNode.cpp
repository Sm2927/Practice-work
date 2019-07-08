//https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1

void deleteNode(Node *node)
{
   // Your code here
    Node *p,*tmp;
    for(p=node;p->next->next!=NULL;p=p->next)
    {
        tmp = p->next;
        p->data=tmp->data;
        // cout<<"hi "<<p->data<<endl;
    }
   // p=NULL;
 // free(p);
 tmp = p->next;
 p->data = tmp->data;
 p->next = NULL;
 free(tmp);
}
