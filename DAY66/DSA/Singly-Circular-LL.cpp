#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    // Destructor
    ~Node() {
        int value = this->data;
        if (this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with the data: " << value << endl;
    }
};

void insertNode(Node*& tail, int element, int d) {
    // Empty List
    if (tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        temp->next = temp;
    } else {
        // Non-Empty List
        // Assuming that the element is present in the list
        Node* curr = tail;

        // Finding the element
        while (curr->data != element) {
            curr = curr->next;
            // In case the element is not found, avoid infinite loop
            if (curr == tail) {
                cout << "Element not found in the list" << endl;
                return;
            }
        }

        // Element Found -- Current is representing node of the element
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node*& tail, int value) {
    // Empty List
    if (tail == NULL) {
        cout << "List is Empty" << endl;
        return;
    } else {
        // Non-Empty List
        // Assuming that the "value" is present in the list

        Node* prev = tail;
        Node* curr = prev->next;

        while (curr->data != value) {
            prev = curr;
            curr = curr->next;

            // // In case the value is not found, avoid infinite loop
            // if (curr == tail->next) {
            //     cout << "Node with value " << value << " not found" << endl;
            //     return;
            // }
        }

        prev->next = curr->next;

        // 1 Node in the Linked List
        if (curr == prev) {
            tail = NULL;
        }
        // >= 2 Nodes in the Linked List
        else if (tail == curr) {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

// Traverse in Circular LL -- Printing element
void print(Node* tail) {
    if (tail == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = tail;

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (tail != temp);

    cout << endl;
}

int main() {
    Node* tail = NULL;

    // Inserting in Empty list
    insertNode(tail, 1, 2);
    print(tail);
    // insertNode(tail, 2, 5);
    // print(tail);
    // insertNode(tail, 5, 6);
    // print(tail);
    // insertNode(tail, 6, 7);
    // print(tail);
    // insertNode(tail, 2, 9);
    // print(tail);
    // insertNode(tail, 5, 10);
    // print(tail);

    deleteNode(tail, 2);
    print(tail);

    // deleteNode(tail, 6);
    // print(tail);

    // deleteNode(tail, 10);
    // print(tail);

    // deleteNode(tail, 5);
    // print(tail);

    // deleteNode(tail, 9);
    // print(tail);

    // deleteNode(tail, 7);
    // print(tail);

    return 0;
}
