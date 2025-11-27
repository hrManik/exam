#include <iostream>
#include <stack>
using namespace std;

int precedence(char op) {
    if(op == '+' || op == '-') return 1;
    if(op == '*' || op == '/') return 2;
    return 0;
}

string infixToPostfix(string exp) {
    stack<char> s;
    string result = "";

    for(char c : exp) {
        if(isalnum(c)) { // operand
            result += c;
        }
        else if(c == '(') {
            s.push(c);
        }
        else if(c == ')') {
            while(!s.empty() && s.top() != '(') {
                result += s.top();
                s.pop();
            }
            s.pop(); // remove '('
        }
        else { // operator
            while(!s.empty() && precedence(s.top()) >= precedence(c)) {
                result += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    while(!s.empty()) {
        result += s.top();
        s.pop();
    }

    return result;
}

int main() {
    string exp;
    cout << "Enter infix expression: ";
    cin >> exp;

    string postfix = infixToPostfix(exp);
    cout << "Postfix expression: " << postfix << endl;

    return 0;
}
