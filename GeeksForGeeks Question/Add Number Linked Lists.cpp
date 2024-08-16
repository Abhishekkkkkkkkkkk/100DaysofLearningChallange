// Given two numbers, num1, and num2, represented by linked lists. The task is to return the head of the linked list that represents the sum of these two numbers.

// For example, the number 190 will be represented by the linked list, 1->9->0->null, similarly 25 by 2->5->null. Sum of these two numbers is 190 + 25 = 215, which will be represented by 2->1->5->null. You are required to return the head of the linked list 2->1->5->null.

// Note: There can be leading zeros in the input lists, but there should not be any leading zeros in the output list.


// class Solution {
//   private:
//     Node* reverse(Node* head){
//         Node* curr = head;
//         Node* prev = NULL;
//         Node* next = NULL;
        
//         while(curr != NULL){
//             next = curr -> next;
//             curr -> next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }
//     void insertAtTail(struct Node* &head, struct Node* &tail, int val){
//         Node* temp = new Node(val);
        
//         if(head == NULL){
//             head = temp;
//             tail = temp;
//             return;
//         }
//         else{
//             tail -> next = temp;
//             tail = temp;
//         }
//     }
//     Node* add(struct Node* num1, struct Node* num2){
//         int carry = 0;
        
//         Node* ansHead = NULL;
//         Node* ansTail = NULL;
        
//         while(num1 != NULL || num2 != NULL || carry != 0){
            
//             int value1 = 0;
//             if(num1 != NULL) value1 = num1 -> data;
            
//             int value2 = 0;
//             if(num2 != NULL) value2 = num2 -> data;
            
//             int sum = carry + value1 + value2;
//             int digit = sum % 10;
            
//             // Create a Node and add it into the answer LL
//             insertAtTail(ansHead, ansTail, digit);
            
//             carry = sum / 10;
            
//             if(num1 != NULL) num1 = num1 -> next;
            
//             if(num2 != NULL) num2 = num2 -> next;
//         }
//         return ansHead;
//     }
//   public:
//     // Function to add two numbers represented by linked list.
//     Node* addTwoLists(struct Node* num1, struct Node* num2) {
//         // step -1 :- Reverse both the LL
//         num1 = reverse(num1);
//         num2 = reverse(num2);
//         // step -2 :- Add LL from the left side
//         Node* ans = add(num1, num2);
//         // step -3 :- Reverse the ans LL
//         ans = reverse(ans);
//         return ans;
//     }
// };