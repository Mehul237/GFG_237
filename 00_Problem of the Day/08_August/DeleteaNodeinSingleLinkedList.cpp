

Node* deleteNode(Node *head,int x) {
    
    if(x == 1)
        return head->next;
        
    Node* ptr = head;
    x = x-2;
    
    while(x--)
        ptr = ptr->next;  
        
    Node* curr = ptr->next;
    ptr->next = ptr->next->next;
    curr = NULL;
    return head;
}
