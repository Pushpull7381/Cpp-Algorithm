#include <iostream>
#include <string>
using namespace std;

class Node {
    int elem;
    Node* next;

    friend class S_LinkedList;
};

class S_LinkedList {
public:
    S_LinkedList();
    int List_size();
    bool Empty();
    void Print();
    void Append(int elem);
    int Delete(int idx);
    void Insert(int idx, int elem);
    void Sum();

private:
    Node* head;
    Node* tail;
};

S_LinkedList::S_LinkedList() {
    head = new Node;
    tail = new Node;

    head = NULL;
    tail = NULL;
}

bool S_LinkedList::Empty() {
    return (head == NULL && tail == NULL); 
}

int S_LinkedList::List_size() {
    int list_size = 0;
    if(Empty()) {
        return list_size;
    }

    else {
        Node* cur_node = head;
        while(cur_node->next != NULL) {
            list_size++;
            cur_node=cur_node->next;
        }
        list_size++;
        return list_size;
    }
}

void S_LinkedList::Print() {
    if(Empty()) {
        cout << "empty" << endl;
    }
    else {
        Node* cur_node = head;
        while(cur_node->next !=NULL) {
            cout << cur_node->elem << ' ';
            cur_node=cur_node->next;
        }
        cout << cur_node->elem << endl;
    }
}

void S_LinkedList::Append(int elem) {
    Node* new_node = new Node;
    new_node->elem = elem;
    new_node->next = NULL;

    if(Empty()) {
        head = new_node;
        tail = new_node;
    }
    else {
        tail->next = new_node;
        tail = tail->next;
    }
    Print();
}

int S_LinkedList::Delete(int idx) {
    int removeNum = 0;
    int cnt = 0;
    Node* cur_node;
    Node* pre_node;

    if(Empty() || List_size() <= idx) {
        return -1;
    }
    else if(idx==0) {
        if(List_size() == 1) {
            removeNum = head->elem;
            tail = NULL;
            head = NULL;
        }
        else {
            cur_node = head;
            removeNum = cur_node->elem;
            head = cur_node->next;
        }
    }
    else {
        pre_node = cur_node = head;
        while(cnt != idx) {
            pre_node = cur_node;
            cur_node = cur_node->next;
            cnt++;
        }
        removeNum = cur_node->elem;
        pre_node->next = cur_node->next;

        if(cur_node == tail) {
            tail = pre_node;
        }
    }
    return removeNum;
}

void S_LinkedList::Insert(int idx, int elem) {
    Node* new_node = new Node;
    new_node->elem = elem;

    Node* pre_node;
    Node* cur_node;
    int cur_idx = 0;

    if(idx == 0) {
        if(Empty()) {
            head = new_node;
            tail = new_node;
        }
        else {
            new_node->next = head;
            head = new_node;
        }
        Print();
    }
    
    else if(idx < 0 || idx > List_size()) {
        cout << "Index Error" << endl;
    }

    else if(idx==List_size()) {
        Append(elem);
        Print();
    }
    else {
        pre_node = cur_node = head;
        while(cur_idx != idx) {
            pre_node = cur_node;
            cur_node = cur_node->next;
            cur_idx++;
        }
        pre_node->next = new_node;
        new_node->next = cur_node;
        Print();
    }
}

void S_LinkedList::Sum() {
    int sum = 0;
    if(Empty()) {
        cout << "0" << endl;
    }
    else {
        Node* cur_node = head;
        while(cur_node->next !=NULL) {
            sum += cur_node->elem;
            cur_node=cur_node->next;
        }
        sum += cur_node->elem;
        cout << sum << endl;
    }
    
}


int main() {
    S_LinkedList T;
    int M;
    cin >> M;
    for(int i=0;i<M;i++) {
        string st;
        cin >> st;
        if(st=="Print") {
            T.Print();

        }
        else if(st=="Append") {
            int elem;
            cin >> elem;
            T.Append(elem);
        }
        else if(st=="Delete") {
            int idx;
            cin >> idx;T
            int a = T.Delete(idx);
            cout << a << endl;
        }
        else if(st=="Insert") {
            int idx, elem;

            cin >> idx >>  elem;
            T.Insert(idx, elem);
        }
        else if(st=="Sum") {
            T.Sum();
        }
    }
}

