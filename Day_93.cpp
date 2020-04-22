#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE 100
int main()
{
    char str[MAX_SIZE];
    char toSearch;
    int i, count;

    cout<<"Enter any string: ";
    gets(str);
    cout<<"Enter any character to search: ";
    toSearch = getchar();

    count = 0;
    i=0;
    while(str[i] != '\0')
    {
        if(str[i] == toSearch)
        {
            count++;
        }

        i++;
    }

    cout<<"Total occurrence of " <<toSearch<<" = "<< count;

    return 0;
}

