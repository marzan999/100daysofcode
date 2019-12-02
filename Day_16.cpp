#include<iostream>
#include<iomanip>
#define n 3.14159
using namespace std;
int main()
{
    double R,A;
    cin>>R;
    A=n*R*R;
    cout<<"A="<<fixed<<setprecision(4)<<A<<endl;
    return 0;
}
