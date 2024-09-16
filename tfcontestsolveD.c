//Created By Momin_Rifat
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int numOfblock,numOfwalk;
    scanf("%d %d",&numOfblock,&numOfwalk);

    int trees[numOfblock];
    for(int i = 1; i <= numOfblock; i++)
    {
        scanf("%d",&trees[i]);
    }

    int totalNumberOfTrees = 0;
    for(int i = 1; i <= numOfwalk; i++)
    {
        int distance_1,distance_2;
        scanf("%d %d",&distance_1,&distance_2);

        for(int i = distance_1; i <= distance_2; i++)
        {
            totalNumberOfTrees = totalNumberOfTrees + trees[i];
        }
    }

    printf("%d\n",totalNumberOfTrees);
    return 0;
}
