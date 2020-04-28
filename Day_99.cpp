#include <bits/stdc++.h>
using namespace std;
void bubble_sort(long [], long);
int main()
{
    long array[100], n, c;

    cout << "Enter number of elements : ";
    cin >> n;

    cout << endl << "Enter " << n << " integers : ";

    for (c = 0; c < n; c++)
        cin >> array[c];

    bubble_sort(array, n);

    cout << endl << "Sorted list in descending order : ";

    for (c = n-1; c >=0; c--)
        cout << " " << array[c];
        cout << endl;

    return 0;
}

void bubble_sort(long list[], long n)
{
    long c, d, t;

    for (c = 0 ; c < n - 1; c++)
    {
        for (d = 0 ; d < n - c - 1; d++)
        {
            if (list[d] > list[d+1])
            {
                /* Swapping */
                t         = list[d];
                list[d]   = list[d+1];
                list[d+1] = t;
            }
        }
    }
}
