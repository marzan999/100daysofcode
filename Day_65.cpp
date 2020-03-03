#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n[51],i,num;
    cin>>num;
    n[0]=1;
    n[1]=1;
    for(i=2;i<51;i++)
    {
        n[i]=n[i-1]+n[i-2];
    }
    cout<<n[num-1]<<endl;
    return 0;
}
