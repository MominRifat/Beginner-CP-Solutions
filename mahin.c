#include<stdio.h>
int main() 
{
    int mark_1,mark_2,mark_3,mark_4,mark_5;
    float total_marks, percentage;
    printf("Enter mark_1 (out of 200):\n");
    scanf("%d", &mark_1);
    printf("Enter mark_2 (out of 200):\n");
    scanf("%d", &mark_2);
    printf("Enter mark_3 (out of 200):\n");
    scanf("%d", &mark_3);
    printf("Enter mark_4 (out of 200):\n");
    scanf("%d", &mark_4);
    printf("Enter mark_5 (out of 200):\n");
    scanf("%d", &mark_5);

    total_marks = mark_1 + mark_2 + mark_3 + mark_4 + mark_5;
    percentage = (total_marks / (5 * 200)) * 100;
    
    printf("Percentage marks: %.2f%%\n", percentage);

    return 0;
}
