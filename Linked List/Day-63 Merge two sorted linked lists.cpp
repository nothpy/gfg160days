/* Link list Node
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
    Node* sortedMerge(Node* head1, Node* head2)
    {
        if(!head1) return head2;
        if(!head2) return head1;
        Node *ptr;
        if(head1->data < head2->data){
            ptr = head1;
            head1 = head1->next;
        }else{
            ptr = head2;
            head2 = head2->next;
        }
        Node *newNode = ptr;
        while(head1 && head2){
            if(head1->data < head2->data){
                ptr->next = head1;
                head1 = head1->next;
            }else{
                ptr->next = head2;
                head2 = head2->next;
            }
            ptr = ptr->next;
        }
        if(!head1) ptr->next = head2;
        if(!head2) ptr->next = head1;
        return newNode;
    }
};
