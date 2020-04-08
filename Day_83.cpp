#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, result;
    cin>>s;
     int arr[123]={0};
     for(int i=0;i<s.length();i++)
     {
         if(arr[s[i]]==0)
         {
             arr[s[i]]=1;
             result+=s[i];
         }
     }
     cout<<result<<endl;
     return 0;
}
