#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter any two integer: ";
    cin>>a>>b;

     int sum =a+b;
     cout<<"Sum is: " << sum <<endl;

     int sub =a-b;
     cout<<"Subtraction is: " << sub <<endl;

     int mul =a*b;
     cout<<"Multiplication is: " << mul <<endl;

     double div =(float)a/b;
     cout<<"Division is: " << div <<endl;

     int rem =a%b;
     cout<<"Reminder is: " << rem <<endl;

     return 0;
     getch();
}
