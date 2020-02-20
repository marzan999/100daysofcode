#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[100],max=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        {
            if(a[i]>max)
               {
                   max=a[i];
               }
        }
    }
    cout<<max<<endl;
    return 0;
}
