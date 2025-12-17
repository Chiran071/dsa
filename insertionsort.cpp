#include <stdio.h>
int main()
{
    int a[] = {7, 30, 5, 55, 8, 1, 12};
    int temp, i, j;

    for (i = 0; i < 7; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && temp < a[j])
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = temp;
    }

    for (i = 0; i < 7; i++)
    {
        printf("%d \t", a[i]);
    }
    return 0;
}