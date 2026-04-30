// this program run all the functions of the queue queue is a fifo container
#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<int> q;
    queue<int> q2;

    // to store a element in queue
    q.push(5);
    q.push(8);
    q.emplace(9);
    q.emplace(3);

    // to check number of elements or size of queue
    cout << "size of queue is " << q.size() << endl;

    // to remove a element from queue . it will pop from front
    q.pop();

    // to acess front element 
    cout << "front element is " << q.front() << endl;

    // to swap value of queue
    q2.swap(q);

    // to take out all element out of queue using loop
    cout << "element in queue 2 are after using all the functions : " << endl;

    while(!q2.empty()) {
        cout << q2.front() << " ";
        q2.pop();
    }

    return 0;
}