#include<iostream>
using namespace std;
int main()
 {
    int i,j;
    char input,alphabet='A';
    cout<<"Enter the uppercase character you want to print in last row: ";
    cin>>input;
    for(i=1;i<=(input-'A'+1);++i)
        {
           for(j=1; j<=i; ++j)
             {
                 cout<<alphabet;
             }
                 ++alphabet;
                 cout<<endl;
        }
         return 0;
}
