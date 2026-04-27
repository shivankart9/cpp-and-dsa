// this program explain us about how to crate pair and the functions of pair

#include<iostream>
using namespace std;

int main() {
    pair<string, int> p = {"shivankar",5}; // creating of array they can be same type as well as differnt type
    pair<int,pair<char,int>> p2 = {3,{'s',8}}; // pair inside pair

    cout << p.first << endl; // shivankar // first function
    cout << p.second << endl; // 5 // second function

    cout << p2.first << endl; // 3
    cout << p2.second.first << endl; // s
    cout << p2.second.second << endl; // 8

    return 0;
}