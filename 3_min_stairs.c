#include<stdio.h>

int min(int a, int b);
int minCostClimbingStairs(int* cost, int costSize);

int main()
{
    int arr[10] = {1,100,1,1,1,100,1,1,100,1};
    int res = minCostClimbingStairs(arr, 10);
    printf("%d", res);
}

int mCostClibStairs(int* arr, int i, int* table)
{
    if(i == 0)
    {
        return arr[0];
    }
    if(i == 1)
    {
        return arr[1];
    }
    if(table[i] != -1)
    {
        return table[i];
    }
    else
    {
        table[i] = min(mCostClibStairs(arr, i-1, table) + arr[i], mCostClibStairs(arr, i-2, table) + arr[i]);
        return table[i];
    }
}

int minCostClimbingStairs(int* cost, int costSize)
{
    int arr[costSize+1];
    for(int i = 0; i<costSize + 1; i++)
    {
        arr[i] = -1;
    }
    return min(mCostClibStairs(cost, costSize - 2, arr), mCostClibStairs(cost, costSize - 1, arr));
}

int min(int a, int b)
{
    if(a==b)
    {
        return b;
    }

    if(a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
