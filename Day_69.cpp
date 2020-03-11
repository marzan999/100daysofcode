#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,m,n;
        cin>>m>>n;
        for(i=m; i<=n; i++)
        {
            int c=0;
            for(j=2; j<=sqrt(i); j++)
            {
                if(i%j==0)
                {
                    c++;
                    break;
                }

            }
            if(c==0 && i!=1)
            {
                cout<<i<<endl;

            }
        }
        cout<<endl;
    }
    return 0;
}
