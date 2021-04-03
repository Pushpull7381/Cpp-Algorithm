#include <iostream>
#include <string>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList {
public:
    Node* front;
    Node* rear;

    LinkedList() {
        this->front = NULL;
        this->rear = NULL;
    }

    void addEnd(int data) {
        Node* newNode = new Node(data);
        if(front == NULL) {
            front = rear = newNode;
        }
        else {
            rear->next = newNode;
            rear = newNode;
        }
    } 

    void removeFront() {
        if(front != NULL) {
            Node* tmp = front;
            front = front->next;
            delete tmp;
        }
    }
};

class LinkedQueue {
public:
    LinkedList *Q;
    int n;

    LinkedQueue() {
        this->Q = new LinkedList();
        this->n = 0;
    }

    int size() {
        return n;
    }
    bool isEmpty() {
        return n==0;
    }
    void front() {
        if(isEmpty()) {
            cout << "Empty" << endl;
        }
        else {
            cout << Q->rear->data << endl;
        }
    }
    void rear() {
        if(isEmpty()) {
        cout << "Empty" << endl;
        }
        else {
            cout << Q->rear->data << endl;
        }
    }
    void enqueue(int e) {
        Q->addEnd(e);
        n++;
    }
    void dequeue() {
        if(isEmpty()) {
            cout << "Empty" << endl;
        }
        else {
            cout << Q[front] << endl;
            Q->removeFront();
            n--;
        }
    }
};


int main() {
    int M;
    cin >> M;
    LinkedQueue T;
    for(int i=0;i<M;i++) {
        
        string st;
        cin >> st;

        if(st=="enqueue") {
            int Z;
            cin >> Z;
            T.enqueue(Z);

        }
        else if(st=="dequeue") {
            T.dequeue();
        }
        else if(st=="isEmpty") {
            if(T.isEmpty()==0) {
                cout << "False" << endl;
            }
            else if(T.isEmpty()==1) {
                cout<< "True" << endl;
            }
        }

        else if(st=="size") {
            int a = T.size();
            cout << a << endl;
        }
        else if(st=="front") {
            T.front();
        }
        else if(st=="rear") {
            T.rear();
        }
    }
}