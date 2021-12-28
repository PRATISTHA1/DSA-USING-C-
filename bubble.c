#include <stdio.h>
#include <stdlib.h>
void traverse(int *a, int n)
{
    printf("array elements are \n ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}
void bubbleSort(int *a, int n)

{
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++)
    {
        printf("number of passes %d", i + 1);
        isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}
int main()
{
    int a[] = {2, 7, 5, 0, 4, 9};
    int n = 6;
    traverse(a, n);
    bubbleSort(a, n);
    traverse(a, n);

    return 0;
}