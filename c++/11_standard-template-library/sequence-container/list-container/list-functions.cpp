// all the functions of the list (list is doubly linked list)
#include<iostream>
#include<list>
using namespace std;

int main() {
    list<int> lis; // just creating list without intializing with some values
    list<int> l = {1,2,3,4}; // intialising a list

    l.pop_back(); // pop back funtion to remove element from last
    l.pop_front(); // pop front function to remove elment from front

    l.push_back(7); // push back function to add element at last
    l.push_front(7);// push front function to add elemnet at front

    l.emplace_back(8); // emplace back function similar to push back function but these are more efficient
    l.emplace_front(8); // emplace front function similar to push front function

    for(int val : l) {
        cout << val << " ";
    }

    return 0;
}

// list have all other function as well that we have done in vectors they have similar syntax
//  this are all other function :  size,erase,clear,begin,end,rbegin,rend,insert,front,back
// differnce b/w list and deque is in list we can not acess random element but in deque we can 