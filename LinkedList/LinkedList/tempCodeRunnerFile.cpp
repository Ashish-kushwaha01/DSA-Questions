Node *curr = Head;
    Node *prev =NULL;
    while(curr->next!=NULL){
        prev = curr;
        curr = curr->next;
    