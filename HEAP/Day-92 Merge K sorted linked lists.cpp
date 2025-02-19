/*Linked list Node structure

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    Node* mergeKLists(vector<Node*>& arr)
    {
        auto cmp = [](Node* a, Node* b) { 
            return a->data > b->data; 
        };
        priority_queue<Node*, vector<Node*>, decltype(cmp)> minHeap(cmp);
        for (Node* list : arr) {
            if (list != nullptr) {
                minHeap.push(list);
            }
        }
        Node dummy(0);
        Node* tail = &dummy;
        while (!minHeap.empty()) {
            Node* curr = minHeap.top();
            minHeap.pop();
            tail->next = curr;
            tail = tail->next;
            if (curr->next != nullptr) {
                minHeap.push(curr->next);
            }
        }
        return dummy.next;
    }
};
