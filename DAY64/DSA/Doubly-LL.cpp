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

// Finding Length of Linked List
int getLength(Node* head) {
    int len = 0;
    Node* temp = head;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

// Insert At Head
void insertAtHead(Node*& tail, Node*& head, int d) {
    if (head == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    } else {
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
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

// Insert at Specific Position
void insertAtPosition(Node*& tail, Node*& head, int position, int d) {
    // Insert at Starting Position
    if (position == 1) {
        insertAtHead(tail, head, d);
        return;
    }

    Node* temp = head;
    int pos = 1;

    while (pos < position - 1) {
        temp = temp->next;
        pos++;
    }

    // Insert at Last Position
    if (temp->next == NULL) {
        insertAtTail(tail, head, d);
        return;
    }

    // Creating a Node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    print(head);

    insertAtHead(tail, head, 12);
    print(head);
    insertAtHead(tail, head, 15);
    print(head);
    insertAtHead(tail, head, 8);
    print(head);

    insertAtTail(tail, head, 30);
    print(head);
    insertAtTail(tail, head, 35);
    print(head);

    insertAtPosition(tail, head, 6, 100);
    print(head);

    cout <<"The length is :- "<< getLength(head) << endl;

    return 0;
}
