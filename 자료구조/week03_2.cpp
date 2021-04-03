#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int e) {
        this->data = e;
        this->next = NULL;
    }
};

class linkedStack {
public:
    Node* head;
    Node* tail;
    int n;

    linkedStack() {
        this->head = NULL;
        this->tail = NULL;
        this->n = 0;
    }

    int size() {
        int n;
        
    }

}
int main() {

}