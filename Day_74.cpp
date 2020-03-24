#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char joy[20];
    gets(joy);
    if(joy[0] >= 'a' && joy[0] < 'z')
    {
        joy[0] = joy[0] + 'A' - 'a';
    }

    int l = strlen(joy), i, j;
    joy[l] = '.';
    l++;
    for(i = 0; i < l; i++)
    {
        if(joy[i] == 'i')
        {
            joy[i] = '!';
        }
        else if(joy[i] == 's')
        {
            joy[i] = '$';
        }
        else if(joy[i] == 'o')
        {
            l++;
            for(j = l; j > i + 1; j--)
            {
                joy[j] = joy[j - 1];
            }
            joy[i] = '(';
            joy[i + 1] = ')';
        }
        else
        {
            continue;
        }
    }
    for(i = 0; i < l; i++)
    {
        printf("%c", joy[i]);
    }
    return 0;
}
