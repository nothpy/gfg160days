/* Link list Node
struct Node {
    int data;
    Node *next;
    Node *random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};*/

class Solution {
  public:
    Node *cloneLinkedList(Node *head) 
    {
        if(!head) return NULL;
        Node* curr = head;
        while(curr){
            Node* clone = new Node(curr->data);
            clone->next = curr->next;
            curr->next = clone;
            curr = clone->next;
        }
        curr = head;
        while(curr){
            if(curr->random){
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }
        Node * temp = new Node(0);
        Node* cloneHead = temp;
        curr = head;
        while(curr){
            cloneHead->next = curr->next;
            curr->next = curr->next->next;
            cloneHead = cloneHead->next;
            curr = curr->next;
        }
        return temp->next;
    }
};
