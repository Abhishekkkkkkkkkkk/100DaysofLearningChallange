#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
LinkedListNode<int>* optimisedReverse(LinkedListNode<int>* head){
    // Base Case 
    if(head == NULL || head -> next == NULL){
        return head;
    }


    LinkedListNode<int>* chotaHead = optimisedReverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return chotaHead; 
}

void reverse(LinkedListNode<int>*& head, LinkedListNode<int>* curr, LinkedListNode<int>* prev) {
    // Base Case
    if (curr == NULL) {
        head = prev;
        return;
    }

    LinkedListNode<int>* forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;   
}


LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    /*
    // Approach - 1 :- Iterative Approach
    if(head == NULL || head -> next == NULL){
        return head;
    }

    LinkedListNode<int>* prev = NULL;
    LinkedListNode<int>* curr = head;
    LinkedListNode<int>* forward = NULL;

     
    while(curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;

    }
    return prev;
    */

    
    /*
    // Approach - 2 :- Recursive Approach
    LinkedListNode<int>* prev = NULL;
    LinkedListNode<int>* curr = head;
    reverse(head, curr, prev);
    return head;
    */


    return optimisedReverse(head);
}