/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/
Node *findMiddle(Node *head) {
    if(head==NULL || head->next==NULL) return head;
    Node* slow=head,*fast = head->next;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL) fast=fast->next;
        slow = slow->next;
    }
    return slow;
}

Node *deleteMiddle(Node *head) {
    Node* temp=NULL;
    if(head->next==NULL) return NULL;
    Node* slow=head,*fast = head->next;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL) fast=fast->next;
        temp=slow;
        slow = slow->next;
    }
    temp->next = slow->next;
    slow->next=NULL;
    delete slow;
    return head;
}
