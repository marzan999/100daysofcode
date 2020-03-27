#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,j,count;
    char s[100];
    scanf("%d",&n);
    getchar();
    for(j=0; j<n; j++)
    {
        gets(s);
        count=0;
        for(i=0; i<strlen(s); i++)
        {
            if(s[i]>='0' && s[i]<='6')
                count++;
            if(s[i]=='O')
                count++;
        }
        if(count==1)
            printf("1 BALL\n");
        if(count<6)
            printf("%d BALLS\n",count);
        if(count==6)
            printf("1 OVER\n");
        if(count>6)
        {
            if(count%6==0)
                printf("%d OVERS\n",count/6);
            else
            {
                if(count/6==1)
                {
                    if(count%6==1)
                        printf("%d OVER %d BALL\n",count/6,count%6);
                    else
                        printf("%d OVER %d BALLS\n",count/6,count%6);
                }

                else
                    printf("%d OVERS %d BALLS\n",count/6,count%6);

            }

        }
    }
}
