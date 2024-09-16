#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int total_members = 1000000000;
    int total_members1 = 0;
    for(int i = 0; i < n; i++) 
    {
        int x, y;
        scanf("%d %d", &x, &y);
        
        if (x < total_members) 
        {
            total_members1 += x - y - 1;
        }
    }

    printf("%d\n", total_members + total_members1 - 3);

    return 0;
}
