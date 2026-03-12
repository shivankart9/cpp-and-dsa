// this program print the square pattern of counting using for loop
#include<iostream>
using namespace std;
int main() {
    int i,j,num=1;

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cout<< num<< " ";
            num++;
        }
        cout<<endl;
    }

    return 0;
}