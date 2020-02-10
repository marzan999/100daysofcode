#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
   char name;
   scanf("%s",&name);
   double salary,sell,bonus;
   scanf("%lf%lf",&salary,&sell);
   bonus=sell*0.15;
   printf("TOTAL = R$ %.2lf\n",salary+bonus);
   return 0;
}
