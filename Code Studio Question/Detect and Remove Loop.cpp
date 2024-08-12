// Given a singly linked list, you have to detect the loop and remove the loop from the linked list, if present. You have to make changes in the given linked list itself and return the updated linked list.

// Expected Complexity: Try doing it in O(n) time complexity and O(1) space complexity. Here, n is the number of nodes in the linked list.



// // Floyed Cycle Detection Algorithm Code
// Node *floyedDetectLoop(Node *head) {
//   if (head == NULL) {
//     return NULL;
//   }

//   Node *slow = head;
//   Node *fast = head;

//   while (slow != NULL && fast != NULL) {
//     fast = fast->next;
//     if (fast != NULL) {
//       fast = fast->next;
//     }
//     slow = slow->next;

//     if (slow == fast) {
//       return slow;
//     }
//   }
//   return NULL;
// }

// // Finding Starting Position in the  Floyed Cycle
// Node *findStarting(Node *head) {
//   if (head == NULL) {
//     return NULL;
//   }
//   Node *intersection = floyedDetectLoop(head);
//   if (intersection == NULL) {
//     return NULL;
//   }
//   Node *slow = head;
//   while (slow != intersection) {
//     slow = slow->next;
//     intersection = intersection->next;
//   }
//   return slow;
// }

// Node *removeLoop(Node *head) {
//   if (head == NULL) {
//     return NULL;
//   }

//   Node *startOfLoop = findStarting(head);
//   if (startOfLoop == NULL) {
//     return head;
//   }
//   Node *temp = startOfLoop;

//   while (temp->next != startOfLoop) {
//     temp = temp->next;
//   }
//   temp->next = NULL;

//   return head;
// }