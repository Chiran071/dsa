#include <stdio.h>
#include <string.h>
int main()
{
    char a[][10] = {"hello", "world", "chiran", "aryal", "csit"};
    int i, j;
    char temp[10];
    int n = sizeof(a) / sizeof(a[0]);

    for (i = 0; i < n; i++)
    {
        strcpy(temp, a[i]);
        j = i - 1;
        while (j >= 0 && strcmpi(temp, a[j]) < 0)
        {
            strcpy(a[j + 1], a[j]);
            j--;
        }
        strcpy(a[j + 1], temp);
    }

    for (i = 0; i < n; i++)
    {
        printf("%s\t", a[i]);
    }
}