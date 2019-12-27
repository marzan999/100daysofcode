#include<iostream>
using namespace std;
int main()
 {
    double num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num<0.0)
        cout<<"This is a negative number."<<endl;
    else if(num>0.0)
        cout<<"This is a positive number."<<endl;
    else
        cout<<"This is 0."<<endl;
    return 0;
 }

