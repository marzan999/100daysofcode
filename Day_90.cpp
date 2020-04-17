#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4],b,c,d,e,f, g;
    for(b=0; b<4; b++)
        cin>>a[b];
    for(b=0; b<4; b++)
    {
        for(c=b+1; c<4; c++)
        {
            if(a[c]<a[b])
            {
                e=a[b];
                a[b]=a[c];
                a[c]=e;
            }
        }
    }
    g=a[1]+a[2];
    f=a[0]+a[1];
    if(a[3]<g || a[2]<f)
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;
    return 0;
}

