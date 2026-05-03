// in this we learn how to create coustom comparitor
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool comparitor(pair<int,int> p1, pair<int,int> p2) {
    if(p1.second < p2.second) return true;
    else return false;
}

int main() {
    vector<pair<int,int>> vec = {{3,7},{4,0},{9,3}};

    sort(vec.begin(),vec.end(),comparitor) ;

    for(auto val : vec) {
        cout << val.first << " " << val.second << endl;
    }

    return 0;
}
        