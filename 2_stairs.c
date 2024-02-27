#include<stdio.h>

int climbStairs(int n);
int cStairs(int n, int* arr);

int main()
{
    int res = climbStairs(3);
    printf("%d\n", res);
}

int climbStairs(int n)
{
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        arr[i] = -1;
    }
    return cStairs(n-1, arr);
}

int cStairs(int n, int* arr)
{
    if(n < 0)
    {
        return 0;
    }

    if(n == 0)
    {
        return 1;
    }

    if(n == 1)
    {
        return 2;
    }

    if(arr[n] == -1)
    {
        arr[n] = cStairs(n-1, arr) + cStairs(n-2, arr);
        return arr[n];
    }
    return arr[n];
}
