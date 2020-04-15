#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int x(int n, int a, int b, int c);
int main()
{
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans =(n+a+b+c);
    printf("%d", ans);
    return 0;
}
