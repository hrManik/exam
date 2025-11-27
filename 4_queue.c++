#include <iostream>
#include <queue>
using namespace std;

int main()
{
queue<int> s;

    s.push(10);
    s.push(40);
    s.push(70);
    s.push(90);

    cout << "queue elements (top to bottom):";
queue<int> temp = s;
    while (!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    cout << "Top element : " << s.front() << endl;

    int popped = s.front();
    s.pop();
    cout << "popped : " << popped << endl;

    cout <<" queue elements after pop : ";
    temp = s;
    while (!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
}
