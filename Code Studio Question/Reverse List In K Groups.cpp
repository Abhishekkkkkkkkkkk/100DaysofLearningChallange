// Problem statement
// You are given a linked list of 'n' nodes and an integer 'k', where 'k' is less than or equal to 'n'.



// Your task is to reverse the order of each group of 'k' consecutive nodes, if 'n' is not divisible by 'k', then the last group of nodes should remain unchanged.



// For example, if the linked list is 1->2->3->4->5, and 'k' is 3, we have to reverse the first three elements, and leave the last two elements unchanged. Thus, the final linked list being 3->2->1->4->5.



// Implement a function that performs this reversal, and returns the head of the modified linked list.



// /**
//  * Definition for singly-linked list.
//  * class Node {
//  * public:
//  *     int data;
//  *     Node *next;
//  *     Node() : data(0), next(nullptr) {}
//  *     Node(int x) : data(x), next(nullptr) {}
//  *     Node(int x, Node *next) : data(x), next(next) {}
//  * };
//  */

// Node* kReverse(Node* head, int k) {
//     // Base Case
//     if (head == nullptr) {
//         return nullptr;
//     }

//     // Step 1 :- Reverse First K Group
//     Node* next = nullptr;
//     Node* curr = head;
//     Node* prev = nullptr;

//     int count = 0;
//     // Check if there are at least k nodes left
//     Node* temp = head;
//     for(int i = 0; i < k; i++){
//         if(temp == NULL) return head;
//         temp = temp->next;
//     }
    
//     while (curr != nullptr && count < k) {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//         count++;
//     }

//     // Step 2 :- Recursion Call
//     if (next != nullptr) {
//         head->next = kReverse(next, k);
//     }

//     // Step 3 :- Return head of reversed list
//     return prev;
// }
