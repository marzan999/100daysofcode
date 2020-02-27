#include<bits/stdc++.h>
using namespace std;
int main()
{
    int M,K,a,b,c;
    cin>>M>>K;
    a=M/K;
    b=K*a;
    c=M-b;
    cout<<c;
    return 0;
}
