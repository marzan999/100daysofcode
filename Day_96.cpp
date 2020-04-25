#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case, num, i;
    cin>>test_case;

    for(i=1; i<=test_case; i++)
    {
        cin>>num;
        if(num%2==0)
            cout<<"0"<<endl;
        else
            cout<<"1"<<endl;
    }
    return 0;
}

