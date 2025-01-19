/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* rotate(Node* head, int k) 
    {
        int count=1;
        if(!head || k==0) return head;
        Node *temp = head;
        while(temp->next){
            count++;
            temp=temp->next;
        }
        k=k%count;
        if(k==0) return head;
        temp->next = head;
        Node *t = head;
        while(k>1){
            t=t->next;
            k--;
        }
        head = t->next;
        t->next = NULL;
        return head;
    }
};
