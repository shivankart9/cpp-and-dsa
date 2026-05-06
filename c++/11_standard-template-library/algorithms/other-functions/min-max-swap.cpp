// this program explain us how min , max , swap functions work
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int a = 5, b = 7;
    swap(a,b);
    cout << "swap value of a : " << a << endl;

    cout << "max = " << max(9,7) << endl;
    cout << "min = " << min(9,7) << endl;

    return 0;
}