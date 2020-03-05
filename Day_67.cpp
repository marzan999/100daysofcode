#include<stdio.h>
int main()
{
    long long  n,a,s,c;
    int t,i;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%lld",&n);
            a=n;
            c=0;
            while(1)
            {
                s=0;
                while(n!=0)
                {
                    s=s*10+n%10;
                    n/=10;
                }
                if(s==a)
                    break;
                else
                {
                    n=s+a;
                    a=s+a;
                    c++;
                }

            }
            printf("%lld %lld\n",c,a);
        }
    }

   return 0;
}
