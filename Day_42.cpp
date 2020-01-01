#include<iostream>
using namespace std;
int main()
{
    int n,i;
    float num[100],sum=0.0,avg;
    cout<<"Enter the numbers of elements: ";
    cin>>n;
    while(n>100||n<1)
    {
        cout<<"Error! number should in range of (1 to 100)."<<endl;
        cout<<"Enter the number again: ";
        cin>>n;
    }
        for(i=0;i<n;++i)
    {
        cout<<i+1<<". Enter number: ";
        cin>>num[i];
        sum+=num[i];
    }
        avg=sum/n;
        cout<<"Average = "<<avg;
    return 0;
}
