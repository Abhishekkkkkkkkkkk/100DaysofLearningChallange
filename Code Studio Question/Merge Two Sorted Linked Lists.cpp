// Problem statement
// You are given two sorted linked lists. You have to merge them to produce a combined sorted linked list. You need to return the head of the final linked list.

// Note:

// The given linked lists may or may not be null.
// For example:

// If the first list is: 1 -> 4 -> 5 -> NULL and the second list is: 2 -> 3 -> 5 -> NULL

// The final list would be: 1 -> 2 -> 3 -> 4 -> 5 -> 5 -> NULL



// #include <bits/stdc++.h>

// /************************************************************

//     Following is the linked list node structure.
    
//     template <typename T>
//     class Node {
//         public:
//         T data;
//         Node* next;

//         Node(T data) {
//             next = NULL;
//             this->data = data;
//         }

//         ~Node() {
//             if (next != NULL) {
//                 delete next;
//             }
//         }
//     };

// ************************************************************/
// Node<int>* solve(Node<int>* first, Node<int>* second) {
//     // if the first list has only one node
//     if (first->next == NULL) {
//         first->next = second;
//         return first;
//     }

//     Node<int>* curr1 = first;
//     Node<int>* next1 = curr1->next;
//     Node<int>* curr2 = second;
//     Node<int>* next2 = curr2->next;

//     while (next1 != NULL && curr2 != NULL) {
//         if ((curr2->data >= curr1->data) && (curr2->data <= next1->data)) {
//             // Add curr2 node between curr1 and next1 in the first list 
//             curr1->next = curr2;
//             curr2->next = next1;

//             // Update pointers to continue merging
//             curr1 = curr2;
//             curr2 = next2;
//             if (curr2 != nullptr) {
//                 next2 = curr2->next;
//             }

//         } else {
//             // Move curr1 and next1 one step forward
//             curr1 = next1;
//             next1 = next1->next;

//             // If reached the end of the first list, attach remaining nodes from second list
//             if (next1 == NULL) {
//                 curr1->next = curr2;
//                 return first;
//             }
//         }
//     }
//     return first;
// }

// Node<int>* sortTwoLists(Node<int>* first, Node<int>* second) {
//     if (first == NULL) return second;
//     if (second == NULL) return first;

//     // Start with the list that has the smaller first element
//     if (first->data <= second->data) {
//         return solve(first, second);
//     } else {
//         return solve(second, first);
//     }
// }

