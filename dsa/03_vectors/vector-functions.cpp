// this program uses all the basic function of the vector 
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<char> vec = {'a','b','c','d','e'} ;

    // size() function
    cout << "size before = " << vec.size() << endl; // to print the size of vector 

    // push_back() function
    vec.push_back('f') ; // to add new element at the last
    cout << "size after adding new element= " << vec.size() << endl; // to print the size of vector after adding new element

    // pop_back() function
    vec.pop_back(); // to remove the element by default it delete last element
    cout << "size after removing last element = " << vec.size() <<endl;

    // front function
    cout << "first element = " << vec.front() << endl; // to print the first element of the vector

    // back funtion 
    cout << "last element = " << vec.back() << endl; // to print the last element of the vector 

    // at function 
    cout << "element at 1 index = " << vec.at(1) << endl; // to print element according to the index

    
    return 0;
}