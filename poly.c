#include <stdio.h>
#include <stdlib.h>
struct poly
{
    double edge;
    double vertex;
};
void function(int n, struct poly *arr[n])
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = (struct poly *)malloc(sizeof(struct poly));
    }
}

int main()
{
    int n = 3;
    struct poly *arr[n];

    function(1, arr[0]);
    arr[0]->edge = 1;
    printf("%d", arr[0]->edge);
    //for (int i = 0; i < n; i++)
    //{
    //   printf("%d", &arr[i]->edge);
    //}
}
