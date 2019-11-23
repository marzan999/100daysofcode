#include<stdio.h>
int main()
{
    int i,j,m,n,x;
    scanf("%d",&x);
    while(x--)
        {
        scanf("%d%d",&m,&n);
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                {
                    if((i+j)%2==0)
                    printf("*");
            else
                printf(".");
                }
            printf("\n");
        }
      }
    return 0;
}
