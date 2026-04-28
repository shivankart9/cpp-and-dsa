// functions of the stack. stack is lifo(last in first out)
#include<iostream>
#include<stack> // use for stack
using namespace std;

int main() {
    stack<int> s;
    // to add element
    s.push(8);
    s.emplace(9);
    s.push(10);
    s.emplace(11);
    s.emplace(12);

    // to remove element;
    s.pop();

    // to take out the top element
    cout << "top element: " << s.top() << endl;

    // to check size of stack
    cout << "size : " << s.size() << endl;

    // to check wheather stack empty or not
    cout << "checking if empty or not : " << s.empty() << endl; // return 0(means false) as it is not empty

    // swaping the value of stack
    stack<int> s2 ;
    s2.swap(s);

    cout << "size of first stack : " << s.size() << endl ; // 0
    cout << "size of second stack : " << s2.size() << endl; // 4

    // to take out all element of stack
    cout << "all element of stack2 : " << endl; // they will be in reverse order
    while(!s2.empty()) {
        cout << s2.top() << endl;
        s2.pop();
    }

  
    return 0;
}