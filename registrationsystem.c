//Created By Momin_Rifat
#include<stdio.h>
#include<string.h>
int main() 
{
    int n;

    scanf("%d",&n);

    char word[n][33];
    int count[n];

    for(int i = 0; i < n; i++) 
    {
        scanf("%s",word[i]);
        int nameExists = 0;
        
        for(int j = 0; j < i; j++) 
        {
            if (strcmp(word[i], word[j]) == 0) 
            {
                nameExists = 1;
                count[j] ++;
                printf("%s%d\n",word[i],count[j]);
                break;
            }
        }
        if(!nameExists) 
        {
            count[i] = 0;
            printf("OK\n");
        } 
    }

    return 0;
}