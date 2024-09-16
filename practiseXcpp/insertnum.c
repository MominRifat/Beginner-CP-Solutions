#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int c = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int count[200] = {0};
    for(int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for(int i = 0; i < n ;i++)
    {
        if(count[arr[i]] != -1)
        {
            printf("%d %d\n",arr[i],count[arr[i]]);
            // c++;
            count[arr[i]] = -1;
        }
    }
    // printf("%d",c);
    return 0;
}