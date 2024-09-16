#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int i = 1;

    for(int row = 0; row < n; row++)
    {
        for(int col = 0; col < n; col++)
        {
            if(row == 0 || col == 0 || row == n-1 || col == n-1)
            {
                printf("%d ",i);
            }
            else
            {
                i++;
                printf("%d ",i);
            }
        }
        printf("\n");
    }
    return 0;
}