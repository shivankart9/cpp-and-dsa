// this program prints the triangle pattern of  char with the help of for loop
#include<iostream>
using namespace std;
int main() {
    int i,j;
    char ch='A';


    for(i=0;i<4;i++) {
        
        for(j=0;j<i+1;j++) {
        cout<<ch;
        }
        ch=ch+1;
        cout<<endl;
    }

    return 0;
}