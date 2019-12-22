#include<iostream>
using namespace std;
int main()
{
      double first,second,temp;

      cout<<"Enter first number: ";
      cin>>first;
      cout<<"Enter second number: ";
      cin>>second;

      temp=first;

      first=second;

      second=temp;

      cout<<"\nAfter swapping, firstNumber = "<<first<<endl;
      cout<<"After swapping, secondNumber = "<<second;

      return 0;
}

