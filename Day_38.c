#include<stdio.h>
int main()
 {
    double num;
    printf("Enter a number: ");
    scanf("%lf",&num);
    if(num<0.0)
        printf("This is a negative number.");
    else if(num>0.0)
        printf("This is a positive number.");
    else
        printf("This is 0.");
    return 0;
 }
