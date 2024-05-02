#ifndef q1
#define q1

#include <iostream>

using namespace std;

template <typename T>
class Queue {
private:
    struct Node {
        T data;
        Node* next;
        Node(T val) : data(val), next(nullptr) {}
    };

    Node* frontNode;
    Node* rearNode;
    int qsize;

public:
    Queue() : frontNode(nullptr), rearNode(nullptr), qsize(0) {}

    void push(T val) {
        Node* newNode = new Node(val);
        if (rearNode == nullptr) {
            frontNode = newNode;
            rearNode = newNode;
        }
        else {
            rearNode->next = newNode;
            rearNode = newNode;
        }
        qsize++;
    }

    void pop() {
        if (empty()) {
            cout << "Queue is empty. Cannot pop.\n";
            return;
        }
        Node* temp = frontNode;
        frontNode = frontNode->next;
        delete temp;
        qsize--;
    }

    T front() {
        if (empty()) {
            cout << "Queue is empty.\n";
            return T();
        }
        return frontNode->data;
    }

    int size() {
        return qsize;
    }

    bool empty() {
        return qsize == 0;
    }
};

// Function to display all elements in the queue
template<typename T>
void display_queue(Queue<T>& q) {
    Queue<T> temp_data = q;
    cout << "Queue contents:\n";
    while (!temp_data.empty()) {
        cout << temp_data.front() << " ";
        temp_data.pop();
    }
    cout << endl << endl;
}

#endif
