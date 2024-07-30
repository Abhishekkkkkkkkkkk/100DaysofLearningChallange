#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    // Constructor
    Node(int d) {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    // Destructor 
    ~Node(){
        int value = this->data;
        // pointer of pointer -- Memory Free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

// Traversing a Linked List - Printing
void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Insert At Tail
void insertAtTail(Node*& tail, Node*& head, int d) {
    if (tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    } else {
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

// Delition operation in Doubly LL
void deleteNode(int position, Node* &head, Node* &tail){
    // Delete the first node
    if(position == 1){
        Node* temp = head;
        temp ->next ->prev = NULL;
        head = temp-> next;
        temp ->next = NULL;
        // If we are deleting the only node present
        if (head == NULL) {
            tail = NULL;
        }
        // Memory free the start node 
        delete temp;
    }
    else{
        // Delete any middle or last node 
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        // If the node to be deleted is the last node
        if (curr->next == NULL) {
            tail = prev;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    print(head);

    insertAtTail(tail, head, 10);
    print(head);
    insertAtTail(tail, head, 20);
    print(head);
    insertAtTail(tail, head, 30);
    print(head);
    insertAtTail(tail, head, 40);
    print(head);
    insertAtTail(tail, head, 50);
    print(head);
    insertAtTail(tail, head, 60);
    print(head);
    insertAtTail(tail, head, 70);
    print(head);
    insertAtTail(tail, head, 80);
    print(head);
    insertAtTail(tail, head, 90);
    print(head);

    deleteNode(1, head, tail);
    print(head);
    deleteNode(8, head, tail);
    print(head);
    deleteNode(4, head, tail);
    print(head);

    return 0;
}
