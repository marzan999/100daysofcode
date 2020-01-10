#include<stdio.h>
int main()
{
    int avg=0;
    int sum=0;
    int x=0;

    int num[4];

    for(x=0;x<4;x++)
    {
        printf("Enter number %d \n",(x+1));
        scanf("%d",&num[x]);
    }
    for(x=0;x<4;x++)
    {
        sum=sum+num[x];
    }

    avg=sum/4;
    printf("Average of entered number is: %d",avg);
    return 0;
}
