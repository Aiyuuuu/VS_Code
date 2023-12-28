#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

class LinkedList
{
public:
    node *head;

    LinkedList()
    {
        head = nullptr;
    }

    void insertAtHead(int element)
    {

        node *newNode = new node(element);
        newNode->next = head;
        head = newNode;
    }

    void insertAtTail(int element)
    {
        node *new_node = new node(element);
        if (!head)
        {
            head = new_node;
            return;
        }
        node *last_node = head;
        while (last_node->next)
        {
            last_node = last_node->next;
        }
        last_node->next = new_node;
    }

    void printList()
    {
        node *current = head;
        while (current)
        {
            cout << current->data << "->";
            current = current->next;
        }
    }
};

int main()
{
    LinkedList l1;
    l1.insertAtHead(2);
    l1.insertAtHead(1);
    l1.insertAtTail(3);

    l1.printList();

    return 0;
}
