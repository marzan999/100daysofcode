#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int N;
    while(scanf("%d",&N)!=EOF)
    {
        if(N)
            cout<<"vai ter duas!"<<endl;
        else
            cout<<"vai ter copa!"<<endl;
    }
    return 0;
}
