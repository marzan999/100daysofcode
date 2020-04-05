#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x=a[0];
    int y=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]<x)
        {
            x=a[i];
            y=i;
        }
    }
    cout<<y+1<<endl;
}
