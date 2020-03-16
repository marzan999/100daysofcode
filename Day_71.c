#include <stdio.h>
#include <string.h>

int main()
{
    char string[50];
    int i, length;
    int abir = 0;

    scanf("%s", string);

    length = strlen(string);

    for(i=0; i < length ; i++)
    {
        if(string[i] != string[length-i-1])
        {
            abir = 1;
            break;
        }
    }

    if (abir==1)
    {
        printf("%s is not a palindrome", string);
    }
    else
    {
        printf("%s is a palindrome", string);
    }
    return 0;
}
