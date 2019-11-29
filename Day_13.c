#include<stdio.h>
int main()
{
    int n,m,c,d,matrix[10][10];
    int counter=0;
    printf("Enter the number of rows and columns of the matrix: \n");
    scanf("%d%d",&m,&n);
    printf("Enter the %d elements of the matrix: \n", m*n);
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            scanf("%d",&matrix[c][d]);
            if(matrix[c][d]==0)
            counter++;
        }
    }
    printf("The entered matrix is: \n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            printf("%d\t",matrix[c][d]);
        }
    printf("\n");
    }
   if(counter > (m*n)/2)
        printf("The entered matrix is a sparse matrix: \n");
   else
        printf("\nThank You");
    return 0;
    getch();
}
