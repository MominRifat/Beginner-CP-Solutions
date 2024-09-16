//Created By Momin_Rifat
#include<stdio.h>
#include<string.h>
int main() 
{
    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++) 
    {
        char column;
        int row;
        scanf(" %c%d",&column,&row);

        for(int j = 1; j <= 8; j++) 
        {
            if (j != row) 
            {
                printf("%c%d\n",column,j);
            }
        }

        for(char k = 'a'; k <= 'h'; k++) 
        {
            if (k != column) 
            {
                printf("%c%d\n",k,row);
            }
        }
    }

    return 0;
}
