#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    cin.getline(s,100);

    string str[100];

    long i,count=-1,c=0;

    for (i=0; s[i]!='\0'; i++)
    {
        c++;
    }

    for (i=0; s[i]!='\0'; i++)
    {
        count++;

        if(!isspace(s[i]) && i<c)
        {
            while(!isspace(s[i]) && i<c)

            {
                str[count]=str[count]+s[i];

                if(isspace(s[i]))
                    break;

                i++;
            }
        }
    }

    for (i=4; i>=0; i--)

    {
        cout<<str[i]<<" ";
    }
}

