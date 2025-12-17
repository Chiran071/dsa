#include <stdio.h>
int main()
{
    int a[] = {23, 4, 5, 8, 7, 2, 6, 1};
    int temp, i, j;
    int N = sizeof(a) / sizeof(a[0]);
    int gap = N / 2;

    for (gap = N / 2; gap > 0; gap /= 2)
    {
        for (i = gap; i < 8; i++)
        {
            temp = a[i];
            j = i - gap;
            while (j >= 0 && temp < a[j])
            {
                /* code */
                a[j + gap] = a[j];
                j -= gap;
            }

            a[j + gap] = temp;
        }
    }

    for (i = 0; i < N; i++)
    {
        printf("%d\t", a[i]);
    }
}