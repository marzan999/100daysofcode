#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num[]= {10,1,6,8,12};

    int key, position=-1, i;

    cin>>key;

    for(i=0; i<6; i++)
    {
        if(key==num[i])
        {
            position=i+1;
            break;
        }
    }
    if(position==-1)
    {
        cout<<key<<" is not present in the list.";
    }
    else
    {
        cout<<key<<" is present in the list in location "<<position;
    }
    return 0;
}

