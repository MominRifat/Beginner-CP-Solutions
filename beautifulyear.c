#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() 
{
    char year[5];
    scanf("%s",year);

    while(1) 
    {
        int new_year = atoi(year) + 1;
        sprintf(year, "%d", new_year);

        int a = year[0] - '0';
        int b = year[1] - '0';
        int c = year[2] - '0';
        int d = year[3] - '0';

        if(a != b && a != c && a != d && b != c && b != d && c != d) 
        {
            printf("%s", year);
            break;
        }
    }

    return 0;
}
