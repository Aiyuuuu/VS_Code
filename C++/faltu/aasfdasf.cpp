#include <iostream>
#include <stack>
#include <algorithm>

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int getPrecedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    else if (op == '*' || op == '/')
        return 2;
    return 0;
}

std::string infixToPrefix(const std::string& infix) {
    std::stack<char> operators;
    std::string postfix;
    
    // Reverse the input infix expression
    std::string reversedInfix = infix;
    std::reverse(reversedInfix.begin(), reversedInfix.end());

    for (char ch : reversedInfix) {
        if (isalnum(ch)) {
            postfix += ch;
        } else if (ch == ')') {
            operators.push(ch);
        } else if (ch == '(') {
            while (!operators.empty() && operators.top() != ')') {
                postfix += operators.top();
                operators.pop();
            }
            operators.pop(); // Pop '('
        } else if (isOperator(ch)) {
            while (!operators.empty() && getPrecedence(operators.top()) > getPrecedence(ch)) {
                postfix += operators.top();
                operators.pop();
            }
            operators.push(ch);
        }
    }

    // Pop any remaining operators
    while (!operators.empty()) {
        postfix += operators.top();
        operators.pop();
    }

    // Reverse the postfix expression to get the prefix expression
    std::reverse(postfix.begin(), postfix.end());

    return postfix;
}

int main() {
    std::string infixExpression;
    std::cout << "Enter the infix expression: ";
    std::getline(std::cin, infixExpression);

    std::string prefixExpression = infixToPrefix(infixExpression);
    std::cout << "Prefix expression: " << prefixExpression << std::endl;

    return 0;
}


