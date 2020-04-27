#include<bits/stdc++.h>
using namespace std;
int main()
{
    int insert,choice,temp,i,j;

    cout<<"Enter how many numbers do you want to insert : ";
    cin>>insert;

    int num[insert];
    cout<<"Enter the numbers : ";

    for(i=0; i<insert; i++)
        cin>>num[i];

    for(i=0; i<insert; i++)
    {
        for(j=i+1; j<insert; j++)
        {
            if(num[j]<num[i])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }

    cout<<endl<<".............Menu............"<<endl;
    cout<<"Press 1 for Ascending order sorting"<<endl;
    cout<<"Press 2 for Descending order sorting"<<endl;
    cout<<"Enter your choice : ";

    cin>>choice;

    switch(choice)
    {
    case 1:
        cout<<endl<<"You have choosen ascending order sorting\n\nSorted list : ";

        for(i=0; i<insert; i++)
            cout<<" "<<num[i];
        break;

    case 2:
        cout<<endl<<"You have choosen descending order sorting\n\nSorted list : ";

        for(i=insert-1; i>=0; i--)
            cout<<" "<<num[i];
        break;

    default :
        cout<<"Wrong Input ! "<<endl;
    }

    return 0;
}

