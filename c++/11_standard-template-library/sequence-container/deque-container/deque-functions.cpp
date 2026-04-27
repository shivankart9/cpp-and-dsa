// functions in deque(double ended queue)
#include<iostream>
#include<deque> // for using deque
using namespace std;

int main() {
    deque<int> deq; // just creating deque without intializing with some values
    deque<int> d = {1,2,3,4}; // intialising deque

    d.pop_back(); // pop back funtion to remove element from last
    d.pop_front(); // pop front function to remove elment from front

    d.push_back(7); // push back function to add element at last
    d.push_front(7);// push front function to add elemnet at front

    d.emplace_back(8); // emplace back function similar to push back function but these are more efficient
    d.emplace_front(8); // emplace front function similar to push front function

    for(int val : d) {
        cout << val << " ";
    }

    return 0;
}

// deque have all other function as well that we have done in vectors they have similar syntax
//  this are all other function :  size,erase,clear,begin,end,rbegin,rend,insert,front,back
// differnce b/w list and deque is in list we can not acess random element but in deque we can 