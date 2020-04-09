#include<bits/stdc++.h>
using namespace std;
#include<string.h>
int main()
{
    char a[100],  b[100];
    int p, q;
    cout<<"Enter two strings: ";

    cin>>a>>b;
    p=strlen(a);
    q=strlen(b);
    int ca[26], cb[26], i, j;

    if(p==q)
    {
        for(i=0; i<26; i++)
        {
            ca[i]=cb[i]=0;
        }
        for(i=0; i<p; i++)
        {
            ca[a[i]-97]++;
            cb[b[i]-97]++;
        }
        int f=0;
        for(i=0; i<26; i++)
        {
            if(ca[i]!=cb[i])
            {
                f++;
                break;
            }
        }
        if(f==0)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}

