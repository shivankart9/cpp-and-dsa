// printing square pattern using for loop A B C D char 
#include<iostream>
using namespace std;

int main() {
    int  i ,j ,n=4;

    for(i=0;i<n;i++) {
        char ch = 'A';
        for(j=0;j<n;j++) {
            cout << ch;
            ch = ch+1; //65 +1 = 66 =b
        }
        cout<<"\n";
    }

    return 0;
}