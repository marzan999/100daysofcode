#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j, length, count;
    char user[100];
    cin>>t;
    for(i = 1; i <= t; i++)
    {
        count = 0;
        scanf(" %[^\n]", user);
        length = strlen(user);
        for(j = 0; j <= length; j++)
        {
            if(length == 1)
            {
                count = 1;
                break;
            }
            if(user[j] == ' ' || user[j] == '\0')
            {
                count++;
                while(user[j] == ' ')
                {
                    j++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
