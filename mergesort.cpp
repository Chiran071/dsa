#include <stdio.h>
void merge(int a[], int left, int right)
{
    int temp[100], pos = left, i;
    int l = left, end = (left + right) / 2, mid = end + 1;

    while (left <= end && mid <= right)
    {
        if (a[left] < a[mid])
        {
            temp[pos] = a[left];
            left++;
        }
        else
        {
            temp[pos] = a[mid];
            mid++;
        }
        pos++;
    }

    while (left <= end)
    {
        temp[pos] = a[left];
        pos++;
        left++;
    }

    while (mid <= right)
    {
        temp[pos] = a[mid];
        pos++;
        mid++;
    }

    for (i = l; i <= right; i++)
    {
        a[i] = temp[i];
    }
}

void mergesort(int a[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergesort(a, left, mid);
        mergesort(a, mid + 1, right);

        merge(a, left, right);
    }
}

int main()
{
    int a[] = {5, 1, 7, 2, 9, 3, 8, 6};
    mergesort(a, 0, 7);

    for (int i = 0; i < 8; i++)
    {
        printf("%d \t", a[i]);
    }
    return 0;
}