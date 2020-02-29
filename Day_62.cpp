#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(cin>>str)
    {
        int len=str.length();
        for(int i=0;i<len;i++)
        {
            if((len-i)%3==0&&i>0)
                cout<<",";
            cout<<str[i];
        }
        cout<<endl;
    }
    return 0;
}
