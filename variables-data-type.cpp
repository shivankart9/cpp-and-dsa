//use of variables and  its all data types
#include<iostream>
using namespace std;
int main()
{
    int age = 20; //int(4 bytes) data type is  used  to store integer 
    cout<<age<<"\n";
    cout<<sizeof(age)<<"\n"; // to find the size 

    char grade = 'a'; // char(1 byte) data type is used to store single character
    cout<<grade<<"\n";

    float pi = 3.14; // float(4 bytes) data type is used to store decimal values
    cout<<pi<<"\n";

    bool iscodingeasy = true; // bool(1 byte) data type is used to store boolean values (true=1 or false=0)
    cout<<iscodingeasy<<"\n";

    double price= 30.99; // double(8 bytes) data type is used to store decimal values with more precision than float
    cout<<price<<"\n";

    return 0;
}