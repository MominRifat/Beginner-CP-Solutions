#include <stdio.h>
#include <math.h>

int main()
{
    double x1, y1, x2, y2, total;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    double newX = pow(x2 - x1, 2);
    double newY = pow(y2 - y1, 2);
    total = sqrt(newX + newY);

    printf("%0.4lf\n", total);
    return 0;
}
