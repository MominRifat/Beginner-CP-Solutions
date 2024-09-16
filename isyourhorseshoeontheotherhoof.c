//Created By Momin_Rifat
#include <stdio.h>
int process(long long int number[4]) 
{
    int equal_count = 0;

    for(int i = 0; i < 4; i++) 
    {
        scanf("%lld",&number[i]);
    }

    for(int i = 0; i < 4; i++) 
    {
        for(int j = i+1; j < 4; j++) 
        {
            if (number[i] == number[j]) 
            {
                equal_count++;
                break;
            }
        }
    }

    return equal_count;
}

int main() {
    long long int number[4];
    
    int result = process(number);

    printf("%d",result);

    return 0;
}
