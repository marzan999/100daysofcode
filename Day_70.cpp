#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int a,b;
        cin >> a >> b;
        if(a > b)
            cout << ">" << endl;
        if(a < b)
            cout << "<" << endl;
        if(a == b)
            cout << "=" << endl;
    }
    return 0;
}
