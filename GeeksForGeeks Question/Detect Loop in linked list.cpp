// Given the head of a singly linked list, the task is to check if the linked list has a loop. A loop means that the last node of the linked list is connected back to a node in the same list.  So if the next of the last node is null. then there is no loop. We need to return true if there is a loop, otherwise false.

// The following is an internal representation of every test case (three inputs).
// A LinkedList and a pos (1-based index)-Position of the node to which the last node links back if there is a loop. If the linked list does not have any loop, then pos = 0.


// class Solution {
//   public:
//     // Function to check if the linked list has a loop.
//     bool detectLoop(Node* head) {
//         // your code here
//         if (head == NULL) 
//             return NULL;

//         Node* slow = head;
//         Node* fast = head;
//         while (fast != NULL && fast->next != NULL){
//             slow = slow->next;
//             fast = fast->next->next;

//             if (slow == fast) return slow;
//         }
//         return NULL;
//     }
// };