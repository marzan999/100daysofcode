#include<bits/stdc++.h>
using namespace std;
void reverse(const string& a);
int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    reverse(str);
    return 0;
}
void reverse(const string& str)
{
    size_t numofchars = str.size();

    if(numofchars == 1)
        cout<<str<<endl;
    else
    {
        cout<<str[numofchars-1];
        reverse(str.substr(0, numofchars-1));
    }
}
