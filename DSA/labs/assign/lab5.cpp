// #include <iostream>
// using namespace std;
// class Stack
// {
// private:
//     int max_size;
//     int *stackArray;
//     int top;

// public:
//     Stack(int size) : max_size(size), top(-1)
//     {
//         stackArray = new int[max_size];
//     }
//     ~Stack()
//     {
//         delete[] stackArray;
//     }
//     void push(int item)
//     {
//         if (top >= max_size - 1)
//         {
//             cout << "Stack Overflow" << std::endl;
//         }
//         else
//         {
//             top++;
//             stackArray[top] = item;
//             cout << "Pushed " << item << " into the stack" << std::endl;
//         }
//     }
//     int pop()
//     {
//         if (top < 0)
//         {
//             cout << "Stack Underflow " << std::endl;
//             return -1; 
//         }
//         else
//         {
//             int item = stackArray[top];
//             top--;
//             cout << "Popped " << item << " from the stack" << std::endl;
//             return item;
//         }
//     }
// };
// int main()
// {
//     Stack stack(5); 
//     stack.push(10);
//     stack.push(20);
//     stack.push(30);
//     stack.push(40);
//     stack.push(50);
//     stack.push(6); // Attempting to push when the stack is full
//     stack.pop();
//     stack.pop();
//     stack.pop();
//     stack.pop();
//     stack.pop();
//     stack.pop(); // Attempting to pop when the stack is empty
//     return 0;
// }


// #include <iostream>
// #include <stack>
// #include <string>

// using namespace std;

// string getSameString(const string& input) {
//     stack<char> Stack1, Stack2;

//     // Push characters onto Stack1
//     for (char ch : input) {
//         Stack1.push(ch);
//     }

//     // Pop characters from Stack1 and push onto Stack2
//     while (!Stack1.empty()) {
//         Stack2.push(Stack1.top());
//         Stack1.pop();
//     }

//     // Pop characters from Stack2 and concatenate to get the reversed string
//     string reversedString;
//     while (!Stack2.empty()) {
//         reversedString += Stack2.top();
//         Stack2.pop();
//     }

//     return reversedString;
// }

// int main() {
//     string inputString;

//     cout << "Enter a string: ";
//     getline(cin, inputString);

//     string resultString = getSameString(inputString);

//     cout << "Output: " << resultString << endl;

//     return 0;
// }
