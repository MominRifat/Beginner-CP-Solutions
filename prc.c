#include<stdio.h>
#define INT_MAX 100
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int count[100] = {0};

    for(int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    int mx =0;
    for(int i = 0; i <n; i++)
    {
        // // if(count[arr[i]] != -1)
        // // {
        // //     printf("%d %d\n",arr[i],count[arr[i]]);
        // //     count[arr[i]] = -1;
        // // }
        // if(count[arr[i]] == )
        // {
        //     mx++;
        //     count[arr[i]] = -1;
        // }
    }
    // printf("%d",mx);
    return 0;
}