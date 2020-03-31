#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, a;
    cin>>n;

    for(a = 1; a <= n; a++)
    {
        cin>>x;

        if(x == 0)
            cout<<"NULL"<<endl;

        else if(x <= 0 && x % 2 == 0)
            cout<<"EVEN NEGATIVE"<<endl;

        else if(x <= 0 && x % 2 == -1)
            cout<<"ODD NEGATIVE"<<endl;

        else if(x >= 0 && x % 2 == 0)
            cout<<"EVEN POSITIVE"<<endl;

        else if(x >= 0 && x % 2 == 1)
            cout<<"ODD POSITIVE"<<endl;
    }
    return 0;
}
