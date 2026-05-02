// in multimaps we can store same keys multiple times
#include<iostream>
#include<map>
using namespace std;

int main() {
    multimap<string,int> m;

    m.emplace("shivankar",80);
    m.insert({"shivankar",80});
    m.emplace("shivankar",80);
    m.emplace("shivankar",80);

    //m.erase("shivankar"); if we use this so all the keys and values will be deleted of "shivankar"
    m.erase(m.find("shivankar")); // by this only one will be deleted

    for(auto val : m) {
        cout << val.first << " " <<  val.second << endl;
    }

    return 0;
}