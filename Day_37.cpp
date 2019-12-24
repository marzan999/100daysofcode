#include<iostream>
using namespace std;
int main()
{
  int n,r=0,t;
  cout<<"Enter a number: ";
  cin>>n;

  t=n;

  while(t!=0)
  {
    r=r*10;
    r=r+t%10;
    t=t/10;
  }

  if(n==r)
    cout<<n<<" is a palindrome number."<<endl;
  else
    cout<<n<<" isn't a palindrome number."<<endl;

  return 0;
}



