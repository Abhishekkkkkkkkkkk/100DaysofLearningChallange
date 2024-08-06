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

// Approach 1 
// int getLength(Node* head){
//     int len = 0;
//     while(head != NULL){
//         len++;
//         head = head -> next; 
//     }
//     return len;
// }

// Node *findMiddle(Node *head) {
//     int len = getLength(head);
//     int mid = len / 2;

//     Node* temp = head;
//     int count = 0;

//     while(count < mid){
//         temp = temp -> next;
//         count++;
//     }
//     return temp;
// }

// Approach 2 :- Recursive 
Node* getMiddle(Node *head){
    // Base Case 
    if(head == NULL || head -> next == NULL)
        return head;

    // if 2 Node Present
    if(head -> next -> next == NULL)
        return head -> next;

    Node* slow = head;
    Node* fast = head -> next;

    while(fast != NULL){
        fast = fast-> next;
        if(fast != NULL){
            fast = fast-> next;
        }
        slow = slow -> next;
    }
    return slow;
}
Node *findMiddle(Node *head) {
    getMiddle(head);
}

