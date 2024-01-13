
[Insertion Sort for Singly Linked List](https://www.geeksforgeeks.org/problems/insertion-sort-for-singly-linked-list/1)

```cpp

class Solution {
    public:

    Node* insertionSort(struct Node* head_ref) {
        
        Node* head = head_ref;
        Node* refrence = head_ref;
        
        while(head) {
            while (refrence != head) {
                if (refrence -> data > head -> data) {
                    int temp = refrence -> data;
                    refrence -> data = head -> data;
                    head -> data = temp;
                }
                refrence = refrence -> next;
            }
            refrence = head_ref;
            head = head -> next;
        }
        return head_ref;
    }
};

```
