// class Solution {
//   private:
//     Node* getMid(Node* head){
//         Node* slow = head;
//         Node* fast = head   -> next;
        
//         while(fast != NULL && fast -> next != NULL){
//             fast = fast -> next -> next;
//             slow = slow -> next;
//         }
//         return slow;
//     }
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
//   public:
//     // Function to check whether the list is palindrome.
//     bool isPalindrome(Node *head) {
        
//         // // Approach 1 - SC -> O(n) & TC -> O(n)
//         // vector<int> arr;
        
//         // Node* temp = head;
        
//         // while(temp != NULL){
//         //     arr.push_back(temp -> data);
//         //     temp = temp -> next;
//         // }
        
//         // int s = 0;
//         // int e = arr.size() - 1;
        
//         // while(s <= e){
//         //     if(arr[s++] != arr[e--]){
//         //         return false;
//         //     }
//         // }
//         // return true;
        
        
//         // Approach 2 - SC -> O(1) & TC -> O(n)
        
        
//         // step 1 :- Find Middle
//         Node* middle = getMid(head);
        
//         // Step - 2 Reverse List After Middle
//         Node* temp = middle -> next;
//         middle -> next = reverse(temp);
        
//         // Step - 3 Compare Both Part
        
//         Node* head1 = head;
//         Node* head2 = middle -> next;
        
        
//         while(head2 != NULL){
//             if(head1 -> data != head2 -> data){
//                 return false;
//             }
//             head1 = head1 -> next;
//             head2 = head2 -> next;
//         }
//         return true;
//     }
// };