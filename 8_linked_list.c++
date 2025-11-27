#include <iostream>
#include <list>
using namespace std;

class Likedlist
{
    list<int> ll;

public:
    void push(int val)
    {
        ll.push_front(val);
    }
    void pop()
    {
        if (!ll.empty())
        {
            ll.pop_front();
        }
        else
            cout << "It was empty !";
    }
    void removeValue(int val)
    {
        ll.remove(val);
        cout << "Delete value was : " << val << endl;
    }
    int top()
    {
        if (!ll.empty())
        {
            return ll.front();
        }
        else
        {
            cout << "Empty function !! ";
            return -1;
        }
    }
    bool empty()
    {
        return ll.empty();
    }
    int searchIdx(int val ){
        int idx = 0;
        for(int x : ll){
            if(x ==  val)
            return idx;
            idx++;
        }
        return -1;
    }
    void display()
    {
        for (int x : ll)
        {
            cout << x << " ";
            cout << endl;
        }
    }
};
int main(){
    Likedlist l;
    l.push(10);
    l.push(20);
    l.push(30);
    l.push(40);
    l.push(50);
    l.push(60);

    cout<<"Before deletion: ";
    l.display();

    l.removeValue(30);
    cout<<"After deletion : ";
    l.display();

    cout<<"INDEX of 20 : "<<l.searchIdx(20) <<endl;
    cout<<"INDEX of 100 : "<<l.searchIdx(100) <<endl;
    

    l.pop();
    cout<<"After pop ";
    l.display();
}
