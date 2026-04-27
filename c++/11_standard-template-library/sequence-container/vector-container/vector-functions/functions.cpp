// functions in vector
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec; // empty vector
    vector<int> vec2 = {0,6,7,8,9}; // intializing vector with some values
    vector<int> vec3(3,10); // intializing size of a vector with size and all same values
    vector<int> vec4(vec2); // adding all elements of other vector in another vector

    vec.push_back(1); // push back function to add a element at last of a vector
    vec.push_back(2);
    vec.push_back(3);

    vec.emplace_back(4); // emplace back function this is similar to push back
    vec.emplace_back(5);

    cout << "size = " << vec.size() << endl ; //5// size function to take out the size of vec 
    cout << "capacity = " << vec.capacity() << endl; //8// capacity function to take out the capacity of the vector and it doubles when we push back any element if capacity is full

    vec.pop_back(); // to remove last element

    vec.erase(vec.begin()); // to erase element from specific place we do not use index x we use itarators((vec.begin() + 1)to erase element at index 1)this uses 0(n) complext=ity
    vec2.erase(vec2.begin() + 1,vec2.begin()+3); // erased element in a range (st,end) erase can change size but not the capacity

    vec.insert(vec.begin()+1,900);// inserts the 900 after the iterator

    vec3.clear(); // clears all the values but capacity of a vector remains same but size changes

    cout << "is vec3 empty : " << vec3.empty() << endl; // empty function use to check is the vector is empty or not
    
    cout << "vec at index 2 using[] : " << vec[2] << " or using at : " << vec.at(2) << endl; // at or [] function to check element at specific  element

    cout << "front : " << vec.front() << endl; // front function to print the front element of vector
    cout << "back : " << vec.back() << endl; // back function to print the last element of vector


    cout << "elements inside vec after using the functions : " << endl;
    for(int val:vec){
        cout << val << endl ;
    }

    cout << "elements inside vec2 after using the functions : " << endl;
    for(int val:vec2){
        cout << val << endl ;
    } 

    cout << "elements inside vec3 after using the functions : " << endl;
    for(int val:vec3){
        cout << val << endl ;
    }

    cout << "elements inside vec4 after using the functions : " << endl;
    for(int val:vec4){
        cout << val << endl;
    }

    return 0;
}