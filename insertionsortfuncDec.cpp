#include <stdio.h>

void sort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && temp > a[j])
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
int main()
{
    int a[] = {7, 10, 1, 5, 6, 20, 25};
    int n = sizeof(a) / sizeof(a[0]);
    sort(a, n);
}