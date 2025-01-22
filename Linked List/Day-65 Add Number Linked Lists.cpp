//Add Number Linked Lists
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node *reverseList(struct Node* head)
    {
        Node *curr = head, *prev=NULL, *next=curr->next;
        while(curr){
            next=curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    Node* addTwoLists(Node* num1, Node* num2) 
    {
        num1=reverseList(num1);
        num2=reverseList(num2);
        int carry=0;
        Node* ans = new Node(0);
        Node* first = ans;
        while(num1 || num2 || carry)
        {
            int sum=carry;
            if(num1){
                sum+=num1->data;
                num1=num1->next;
            }
            if(num2){
                sum+=num2->data;
                num2=num2->next;
            }
            ans->data=(sum%10);
            carry=sum/10;
            if(num1||num2||carry){
                ans->next=new Node(0);
                ans=ans->next;
            }
        }
        reverseList(first);
        while(ans->data==0) ans=ans->next;
        return ans;
    }
};
