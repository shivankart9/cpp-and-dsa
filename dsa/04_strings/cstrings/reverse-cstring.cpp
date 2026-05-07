// in this program we will reverse cstring
#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char s[] = {'s','h','i','v','\0'};

    int st = 0,end =strlen(s)-1;
    while(st<end) {
        swap(s[st],s[end]);
        st++;
       end--;
    }

    cout << "reverse = " << s << endl;

    return 0;
}
