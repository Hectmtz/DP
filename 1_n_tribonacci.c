#include<stdio.h>

int tribonacci(int n);
int tb(int n, int* arr);

int main()
{
    int res = tribonacci(25);
    printf("%d", res);
}

int tribonacci(int n)
{
    int arr[n+1];
    for(int i=0; i<n+1; i++)
    {
        arr[i] = -1;
    }
    return tb(n, arr);
}

int tb(int n, int* arr)
{
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }
    if(n == 2)
    {
        return 1;
    }
    if(arr[n] != -1)
    {
        return arr[n];
    }
    arr[n] = tb(n-1, arr) + tb(n-2, arr) + tb(n-3, arr);
    return arr[n];
}
