// this program tells whether a  user is eligible or not
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age : ";
    cin>>age;

    if(age>=18) {
        cout<<"you are eligible"<<endl;
    } else {
        cout<<"you are not eligible"<<endl;
    }

    return 0;
}