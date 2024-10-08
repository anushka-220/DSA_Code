
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int value; 
    Node* next; 
    Node(int data1, Node* next1) {
        value= data1;
        next = next1;
    }
    Node(int data1) {
        value = data1;
        next = nullptr;
    }
};


Node* reverseLinkedList(Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    Node* newHead = reverseLinkedList(head->next);
    Node* front = head->next;
    front->next = head;
    return newHead;
}
void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(21);
    head->next = new Node(5);
    head->next->next = new Node(20);
    head->next->next->next = new Node(78);

    cout << "Original Linked List: ";
    printLinkedList(head);

    head = reverseLinkedList(head);

    cout << "Reversed Linked List: ";
    printLinkedList(head);

    return 0;
}

