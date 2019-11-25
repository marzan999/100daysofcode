#include<stdio.h>
#include<conio.h>
int main()
{
    int n,num1,num2,result;
    printf("\nwhat operator do you want to do?\n");
    printf("\npress 1 for addition\n");
    printf("\npress 2 for subtraction\n");
    printf("\npress 3 for multiplication\n");
    printf("\npress 4 for division\n");
    scanf("%d",&n);
    printf("\nplease enter a number\n");
    scanf("%d",&num1);
    printf("\nplease enter a second number\n");
    scanf("%d",&num2);
    switch(n)
    {
        case 1:result=num1+num2;
               printf("addition of two number is %d",result);
               break;
        case 2:result=num1-num2;
               printf("subtraction of two number is %d",result);
               break;
        case 3:result=num1*num2;
               printf("multiplication of two number is %d",result);
               break;
        case 4:result=num1/num2;
               printf("division of two number is %d",result);
               break;
        default:printf("wrong input");
    }
    getch();
    return 0;
}
