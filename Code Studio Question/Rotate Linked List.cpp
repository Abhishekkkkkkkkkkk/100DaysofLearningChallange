/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */
Node* findNthNode(Node* temp, int k){
        int count = 1;
        while(temp != NULL){
            if(count == k){
                return temp;
            }
            count++;
            temp = temp -> next;
        }
        return temp;
}

Node *rotate(Node *head, int k) {
     // Write your code here.
     // Base Case
        if(head == NULL || k == 0){
            return head;
        }
        // First Find the Length of the LL
        int length = 1;
        Node* tail = head;
        while(tail -> next != NULL){
            length++;
            tail = tail -> next;
        }
        
        // Edge Case
        if(k % length == 0){
            return head;
        }
        
        k = k % length;
        tail -> next = head;
        
        // Now Find the New Last Node
        Node* newLastNode = findNthNode(head, length - k);

        head = newLastNode -> next;
        newLastNode -> next = NULL;
        return head;
}