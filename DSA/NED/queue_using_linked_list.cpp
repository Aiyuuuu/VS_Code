#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int data) {
        this->data = data;
        next = nullptr;
    }
};

class queue {
private:
    node* front;
    node* rear;

public:
    queue() {
        front = nullptr;
        rear = nullptr;
    }

    void enqueue(int element) {
        node* newNode = new node(element);
        if (rear == nullptr) {
            rear = newNode;
            front = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        cout << element << " enqueued in the queue" << endl;
    }

    void dequeue() {
        if(front==nullptr){
            cout<<"error: cannot dequeue as queue already empty"<<endl;
            return;
        }

        if(front==rear){
            delete front;
            front=nullptr;
            rear=nullptr;
            return;
        }

        node* temp=front;
        front=front->next;
        delete temp;

    }
};

int main() {
    queue myQueue;

    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    myQueue.dequeue();
    myQueue.dequeue();
    myQueue.dequeue();
    myQueue.dequeue(); // Trying to dequeue from an empty queue

    return 0;
}
