Node *removeLoop(Node *head)
{
    // Write your code here.

    if(head == NULL)
    return head;

    Node* slow=head;
    Node* fast=head;
    Node* intersection=NULL;
    //where slow and fast are meet we store that node in intersection
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if (slow == fast) {
          intersection = slow;
          break;
        }
    }
    // if linkedd list is not circular then print it
    if(fast==NULL)
    return head;

    //slow point to head
    slow = head;
    // use a while loop for finding first node of cycle
    while(slow!=intersection){
        slow = slow->next;
        intersection =intersection->next;
    }
    Node* first = slow;
    //use a while loop for remove the loop(cycle)
    while(slow->next!=intersection){
        slow=slow->next;
    }
    slow->next = NULL;

    return head;

}
