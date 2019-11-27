#include<stdio.h>
int main()
{
    int n,i,fact;
    fact=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
       fact=fact*i;
    }
    printf("Factorial of %d is: %d",n,fact);
    getch();
}
