#include <stdio.h>
int main()
{
   double number_1,number_2,Average;
   scanf("%lf %lf",&number_1,&number_2);
   Average = (((number_1*3.5) +(number_2*7.5))/11);
   printf("AVERAGE = %.5lf\n",Average);
   return 0;
}
