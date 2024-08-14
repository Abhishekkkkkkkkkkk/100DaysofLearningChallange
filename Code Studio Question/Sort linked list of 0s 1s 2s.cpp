// Given a linked list of 'N' nodes, where each node has an integer value that can be 0, 1, or 2. You need to sort the linked list in non-decreasing order and the return the head of the sorted list.



// Example:
// Given linked list is 1 -> 0 -> 2 -> 1 -> 2. 
// The sorted list for the given linked list will be 0 -> 1 -> 1 -> 2 -> 2.



// /*
// // Approach 1 Count all f 0s 1s 2s and replace with the node 
// Node* sortList(Node *head){
//     int zeroCount = 0;
//     int oneCount = 0;
//     int twoCount = 0;

//     Node* temp = head;

//     while(temp != NULL){
//         if(temp -> data == 0){
//             zeroCount++;
//         }
//         else if(temp -> data == 1){
//             oneCount++;
//         }
//         else if(temp -> data == 2){
//             twoCount++;
//         }

//         temp = temp -> next;
//     }

//     temp = head;
//     while(temp != NULL){
//         if(zeroCount != 0){
//             temp -> data = 0;
//             zeroCount--;
//         }
//         else if(oneCount != 0){
//             temp -> data = 1;
//             oneCount--;
//         }
//         else if(twoCount != 0){
//             temp -> data = 2;
//             twoCount--;
//         }

//         temp = temp -> next;
//     }

//     return head;
// }
// */

// // Approach 2 :- Change links i.e. create three LL for zero, one and two and merge all three

// // Function for insert at tail 
// void insertAtTail(Node* &tail, Node* curr){
//     tail -> next = curr;
//     tail = curr;
// }
// Node* sortList(Node *head){

//     // Step 1 :- Create Dummy Node with Head and Tail
//     Node* zeroHead = new Node(-1);
//     Node* zeroTail = zeroHead; 
//     Node* oneHead = new Node(-1);
//     Node* oneTail = oneHead;
//     Node* twoHead = new Node(-1);
//     Node* twoTail = twoHead;

//     // Step 2 :- Create Seprate List for 0's, 1's and 2's

//     Node* curr = head;
//     while(curr != NULL){
//         int value = curr -> data;

//         if(value == 0){
//             insertAtTail(zeroTail, curr);
//         }
//         else if(value == 1){
//             insertAtTail(oneTail, curr);
//         }
//         else if(value == 2){
//             insertAtTail(twoTail, curr);
//         }
//         curr = curr -> next;
//     }

//     // Step 3 :- Merge all three List

//     // 1's List not empty
//     if(oneHead -> next != NULL){
//         zeroTail -> next = oneHead -> next;
//     }
//     else{
//        // 1's List empty
//        zeroTail -> next = twoHead -> next; 
//     }

//     oneTail -> next = twoHead -> next;
//     twoTail -> next = NULL;

//     // Step 4 :- Setup Head
//     head = zeroHead -> next;

//     // Step 5 :- delete all dummy node
//     delete zeroHead;
//     delete oneHead;
//     delete twoHead;

//     return head;
// }