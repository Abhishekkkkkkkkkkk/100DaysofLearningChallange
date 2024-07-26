#include<bits/stdc++.h>
using namespace std;

// Node Structure of Singly Linked List
class Node{
public:
    int data;
    Node* next;

    // Constructor 
    Node(int data){
        this->data = data;
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

// Insert at End
void insertAtTail(Node* &tail, int d){
    // Create a new node with the given data
    Node* temp = new Node(d);
    // Point the next of the current tail to the new node
    tail->next = temp;
    // Change the tail to the new node
    tail = temp;
}

// Deletion Operation
void deleteNode(int position, Node* &head){
    // Delete the first node
    if(position == 1){
        Node* temp = head;
        head = head->next;
        // Memory free the start node 
        temp->next = NULL;
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
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

// Printing Linked List 
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    // Created a new node 
    Node* node1 = new Node(10);
 
    Node* head = node1;
    Node* tail = node1;
    
    cout << endl;

    print(head);
    insertAtTail(tail, 20);
    print(head);
    insertAtTail(tail, 30);
    print(head);
    insertAtTail(tail, 40);
    print(head);
    insertAtTail(tail, 50);
    print(head);
    insertAtTail(tail, 60);
    print(head);
    insertAtTail(tail, 70);
    print(head);

    deleteNode(1, head);
    print(head);
    deleteNode(3, head);
    print(head);
    deleteNode(5, head);
    print(head);
    
    return 0;
}
