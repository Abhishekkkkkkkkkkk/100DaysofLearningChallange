// Given the head, the head of a singly linked list, find if the linked list is circular or not. A linked list is called circular if it is not NULL terminated and all nodes are connected in the form of a cycle. An empty linked list is considered circular.

// Note: The linked list does not contain any inner loop.

// class Solution {
//   public:
//     bool isCircular(Node *head) {
//         // Case - 1 :- Empty List
//         if(head == NULL){
//             return true;
//         }
//         // Case 2 :- For one node
//         if(head -> next == head){
//             return true;
//         }
//         // Case 3 :- for > 1 node 
//         Node* temp = head -> next;
//         while(temp != NULL && temp != head){
//             temp = temp -> next;
//         }
    
//         // for Circular LL
//         if(temp == head){
//             return true;
//         }
//         // for non Circular LL
//         if(temp == NULL){
//             return false;
//         }
//     }
// };