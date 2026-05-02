// this program use all the functions of priority queue (internally it is binary queue that we will know while learning heeps)
// this stores element according to priority the larger the number the higher the priority and top element is the highest priority element and vice versa 
#include<iostream>
#include<queue>
using namespace std;

int main() {
    //max heap
    priority_queue<int> q;
    //min heap
    priority_queue<int,vector<int>,greater<int>> rq; // syntax to make reverse priority queue 

    // to store a element in priority queue
    q.push(5);
    q.push(8);
    q.emplace(9);
    q.emplace(3);

    // to check number of elements or size of queue
    cout << "size of queue is " << q.size() << endl;

    // to remove a element from queue . it will pop from top(priority element)
    q.pop();

    // to acess top(priority element) element 
    cout << "top element is " << q.top() << endl;

    // to take out all element out of queue using loop
    cout << "element in priority queue are after using all the functions : " << endl;

    while(!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }

    return 0;
}

// when we take out all the values so it gives element in desending order(as elements are stored according to priority)