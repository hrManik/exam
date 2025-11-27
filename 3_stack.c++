#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;

    s.push(10);
    s.push(40);
    s.push(70);
    s.push(90);

    cout << " Stack elements (top to bottom):";
    stack<int> temp = s;
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    cout << "Top element : " << s.top() << endl;

    int popped = s.top();
    s.pop();
    cout << "popped : " << popped << endl;

    cout << "Stack elements after pop : ";
    temp = s;
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}
