#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class List {
public:
    Node *head;
    Node *tail;

    List() {
        head = nullptr;
        tail = nullptr;
    }

    void push_front(int val) {
        Node *newNode = new Node(val);

        if(head  == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else{
            newNode -> next = head;
            head = newNode;
        }
    }

    void push_back(int val) {
        Node *newNode = new Node(val);
        
        if(head == nullptr) {
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front() {
        if(head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }

        Node *temp = head;
        head = head->next;
        delete temp;

        if(head == nullptr) {
            tail = nullptr;
        }

    }

    void pop_back() {
        if(head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }

        Node *prev = head;
        while(prev->next->next != nullptr) {
            prev = prev->next;
        }

        delete prev->next;
        prev->next = nullptr;
        tail = prev;
    }
    


    void insert(int val, int pos) {
        if(pos < 0) {
            cout << "Invalid position" << endl;
            return;
        }
        if(pos == 0) {
            push_front(val);
            return;
        }

        Node * newNode = new Node(val);
        Node * temp = head;
        for(int i = 0; i<pos-1; i ++) {
            temp = temp->next;

            if(temp == nullptr) {
                push_back(val);
                return;
            }
        }
        newNode->next = temp->next;
        temp->next = newNode;

    }

    int search(int val) {
        Node * temp = head;
        int pos = 0;

        while(temp != nullptr) {
            if(temp->data == val) {
                return pos;
            }
            temp = temp->next;
            pos++;
        }

        return -1;
    }

    void print() {
        Node *temp = head;

        while(temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        (head != nullptr) && cout << "nullptr" << endl ;
    }
};



int main()
{
    List ll;

    ll.push_back(10);
    ll.push_back(20);
    ll.push_back(30);

    ll.insert(40, 4);

    ll.print();

    

    cout << ll.search(20) << endl;
    return 0;
}