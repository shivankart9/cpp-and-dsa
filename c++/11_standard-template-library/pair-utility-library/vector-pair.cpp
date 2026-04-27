// we can also crate vector pair means inside a vector there will be pairs and print them using loop
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<pair<int,int>> vec = {{2,3},{3,4},{7,8}}; // creating vector pair
 
    vec.push_back({0,0}); // here we have to create the pair first to push value at last
    vec.emplace_back(0,0); // here we donot need to make pair we can directly seprate values by comma and emplace will make pair for us 

    // printing the pairs inside the vector
    for(pair<int,int> p : vec) { // also we can use auto instead of pair<int,int>
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}