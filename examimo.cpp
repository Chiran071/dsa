// insert 15 number bubble/insertion sort ask for the key and binary search it

#include <stdio.h>

void binarysearch(int a[], int target, int left, int right)
{
    int mid = (left + right) / 2;

    if (left > right)
    {
        printf("not found");
    }
    else if (target == a[mid])
    {
        printf("found at index %d", mid);
    }
    else if (target > a[mid])
    {
        binarysearch(a, target, mid + 1, right);
    }
    else
    {
        binarysearch(a, target, left, mid - 1);
    }
}

int main()
{
    int a[15] = {5, 10, 16, 14, 9, 1, 80, 15, 8, 2, 11, 20, 71, 7, 27};

    for (int i = 0; i < 14; i++)
    {
        for (int j = 0; j < 14 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }

    // for(int i=0;i<15;i++){
    //     printf("%d\t",a[i]);
    // }

    int target;
    printf("enter the target");
    scanf("%d", &target);
    binarysearch(a, target, 0, 14);
}