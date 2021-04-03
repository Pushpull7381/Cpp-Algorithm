#include <iostream>
using namespace std;

class Node {
    int elem;
    Node* next;
    Node* prev;
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
    void Print_reverse();
    void Max();

private:
    Node* header;
    Node* trailer;
};

S_LinkedList::S_LinkedList() {
    header = new Node;
    trailer = new Node;

    header = NULL;
    trailer = NULL;
}

bool S_LinkedList::Empty() {
    return (header == NULL && trailer == NULL); 
}

int S_LinkedList::List_size() {
    int list_size = 0;
    if(Empty()) {
        return list_size;
    }

    else {
        Node* cur_node = header;
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
        Node* cur_node = header;
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
        header = new_node;
        trailer = new_node;
    }
    else {
        trailer->next = new_node;
        trailer = trailer->next;
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
            removeNum = header->elem;
            trailer = NULL;
            header = NULL;
        }
        else {
            cur_node = header;
            removeNum = cur_node->elem;
            header = cur_node->next;
        }
    }
    else {
        pre_node = cur_node = header;
        while(cnt != idx) {
            pre_node = cur_node;
            cur_node = cur_node->next;
            cnt++;
        }
        
        removeNum = cur_node->elem;
        pre_node->next = cur_node->next;
        cur_node->next->prev = pre_node->next;
        
        if(cur_node == trailer) {
            trailer = pre_node;
        }
    }
    return removeNum;
}

void S_LinkedList::Print_reverse() {
    if(Empty()) {
        cout << "empty" << endl;
    }
    else {
        Node* cur_node = trailer;
        while(cur_node->prev !=NULL) {
            cout << cur_node->elem << ' ';
            cur_node=cur_node->prev;
        }
        cout << cur_node->elem << endl;

    }
}


void S_LinkedList::Max() {
    int max = 0;
    if(Empty()) {
        cout << "empty" << endl;
    }
    else {
        Node* cur_node = header;
        while(cur_node->next !=NULL) {
            if(cur_node->elem > max) {
                max=cur_node->elem;
            } 
            cur_node=cur_node->next;
        }
        if(cur_node->elem > max) {
                max=cur_node->elem;
        }
        cout << max << endl;
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
            cin >> idx;
            int a = T.Delete(idx);
            cout << a << endl;
        }
        else if(st=="Print_reverse") {
            T.Print_reverse();
        }
        else if(st=="Max") {
            T.Max();
        }
    }
}

