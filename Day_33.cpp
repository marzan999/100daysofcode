#include<iostream>
using namespace std;
int main()
{
    int n,i;
    long long fact=1;
    cout<<"Enter an integer: ";
    cin>>n;
    if(n<0)
        cout<<"Error! Factorial of a negative number doesn't exist.";
    else
        {
        for(i=1;i<=n;++i)
         {
            fact*=i;
         }
        cout<<"Factorial of "<<n <<" is = "<<fact;
        }
    return 0;
}
