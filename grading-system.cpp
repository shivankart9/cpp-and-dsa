// this programs tell the grade  of student
#include<iostream>
using namespace std;
int main() {
    int marks ;
    cout<<"enter the marks : ";
    cin>>marks;

    if(marks>=90) {
        cout<<"A GRADE";
    } 
    else if (marks<=90 && marks>=80) {
        cout<<"B GRADE";
    } else {
        cout<<"C GRADE";
     }

     return 0;
}