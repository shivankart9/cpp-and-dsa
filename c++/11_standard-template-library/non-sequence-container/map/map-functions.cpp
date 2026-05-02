// this program uses all the functions of the map functions. map is use to store key value pairs
// it automatically sort values
#include<iostream>
#include<map>
using namespace std;

int main() {
    map<int,string> m;

    // intializing keys and value m[key] = value
    m[01] = "shivankar";
    m[05] = "ayush";
    m[03] = "ayushi";
    m[04] = "shiva";
    m[01] = "laxman";

    // for adding new pair
    m.insert({06,"ram"});
    m.emplace(07,"hanuman");

    // to count the key how many time they appeared
    cout << "count of 01 : " << m.count(01) << endl;

    // to print value of a particular key
    cout << "value of 04 : " << m[04] << endl;

    // to erase a key and value
    m.erase(05);

    // to print all values
    for(auto p : m) {
        cout << p.first << " " << p.second << endl;
    }

    // find function
    if(m.find(06) != m.end()) {
        cout << "found" << endl;
    } else {
        cout << "not found" << endl;
    }

    return 0;

}

// size and empty functions works same way 