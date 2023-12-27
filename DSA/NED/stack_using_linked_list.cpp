#include<iostream>

using namespace std;


class node{
    public:
        int data;
        node* next;
    
        node(int data){
            this->data = data; next=nullptr;
        }
};


class stack{
    private:
        node* top;
    public:
        stack(){top=nullptr;}

        void push(int element){
            node* newNode = new node(element);
            newNode->next=top;
            top=newNode;
            cout<<"pushed into the stack, top node address is now: "<<top<<endl;
        }

        void pop(){
            if(top==nullptr){cout<<"stack is already empty"<<endl;return;}

            cout<<top->data<<" popped from the stack";
            top=top->next;
        }

        void peek(){
            cout<<"top element of the stack: "<<top->data<<endl;
        }
        bool isEmpty(){
            return top==nullptr;
        }
};  




int main()
{

    stack stack1;
    stack1.push(2);
    stack1.peek();
    
    return 0;
}
